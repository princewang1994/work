/*
A family hierarchy is usually presented by a pedigree tree. Your job is to count those family members who have no child.
Input

Each input file contains one test case. Each case starts with a line containing 0 < N < 100, the number of nodes in a tree, and M (< N), the number of non-leaf nodes. Then M lines follow, each in the format:

ID K ID[1] ID[2] ... ID[K]
where ID is a two-digit number representing a given non-leaf node, K is the number of its children, followed by a sequence of two-digit ID's of its children. For the sake of simplicity, let us fix the root ID to be 01.
Output

For each test case, you are supposed to count those family members who have no child for every seniority level starting from the root. The numbers must be printed in a line, separated by a space, and there must be no extra space at the end of each line.

The sample case represents a tree with only 2 nodes, where 01 is the root and 02 is its only child. Hence on the root 01 level, there is 0 leaf node; and on the next level, there is 1 leaf node. Then we should output "0 1" in a line.

Sample Input
2 1
01 1 02
Sample Output
0 1

思路：dfs， 计数：在入队之前统计将要入队的孩子是不是叶子节点，
注意：需要在每一层设置一个计数器cnt，否则宽搜无法记录每一层叶子节点总数
*/
#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;
class Node
{
public:
    vector<int> child;
};
Node node[120];
void dfs()
{
   // int vst[120];
    queue<int> q;
    queue<int> lev;
    int cnt[100];
    memset(cnt, 0, sizeof(cnt));
    q.push(1);
    lev.push(0);

    if(node[1].child.size() == 0)
    {
        cout << "1";;
        return;
    }
    //vst[0] = 1;
    int k = 0;
    while(!q.empty())
    {
        int v = q.front();
        int l = lev.front();

        q.pop();
        lev.pop();
        for(int i = 0; i < node[v].child.size(); i ++)
        {
            if(node[node[v].child[i]].child.size() != 0)
            {
                int c = node[v].child[i];
                q.push(c);
                lev.push(l + 1);
            }
            else
            {
                cnt[l + 1] ++;
                if(l + 1 > k)
                {
                    k = l + 1;
                }
            }
        }
    }
    for(int i = 0; i <= k; i++)
    {
        if(i == 0)
            cout << cnt[i];
        else
            cout << " " << cnt[i];
    }
}
int main()
{

    int N, M;
    cin >> N >> M;
    while(M--)
    {
        int id, k;
        cin >> id >> k;
        while(k--)
        {
            int child;
            cin >> child;
            node[id].child.push_back(child);
        }
    }
    dfs();
    return 0;
}
