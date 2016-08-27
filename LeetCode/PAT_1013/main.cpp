/**
1013. Battle Over Cities (25)

It is vitally important to have all the cities connected by highways in a war.
If a city is occupied by the enemy, all the highways from/toward that city are closed.
We must know immediately if we need to repair any other highways to keep the rest of the cities connected.
Given the map of cities which have all the remaining highways marked, you are supposed to tell the number of highways need to be repaired, quickly.

For example, if we have 3 cities and 2 highways connecting city1-city2 and city1-city3. Then if city1 is occupied by the enemy, we must have 1 highway repaired, that is the highway city2-city3.

Input

Each input file contains one test case. Each case starts with a line containing 3 numbers N (<1000), M and K, which are the total number of cities, the number of remaining highways, and the number of cities to be checked, respectively. Then M lines follow, each describes a highway by 2 integers, which are the numbers of the cities the highway connects. The cities are numbered from 1 to N. Finally there is a line containing K numbers, which represent the cities we concern.

Output

For each of the K cities, output in a line the number of highways need to be repaired if that city is lost.

Sample Input
3 2 3
1 2
1 3
1 2 3
Sample Output
1
0
0

当某个城市被占领， 城市被分为几块
连通分支数量-1
**/
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int N, M, K;

vector< vector<int> > e;

void init()
{
    cin >> N >> M >> K;
    e.resize(N + 1);
    while(M--)
    {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
}

int vst[1024];
int find(int n)
{
    if(vst[n])
        return 0;

    vst[n] = 1;
    for(int i = 0; i < e[n].size(); i++ )
    {
        int v = e[n][i];
        if(!vst[v])
            find(v);
    }
    return 1;
}

int lost(int city)
{
    memset(vst, 0, sizeof(vst));
    vst[city] = 1;
    int cnt = 0;
    for(int i = 1; i <= N; i++)
    {
        cnt += find(i);
    }
    return cnt - 1;
}

int main()
{
    init();
    while(K--)
    {
        int city;
        cin >> city;
        cout << lost(city) << endl;
    }
    return 0;
}
