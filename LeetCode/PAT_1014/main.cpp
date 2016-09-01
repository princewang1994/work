#include <iostream>
#include <queue>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int N, M, K, Q;
    cin >> N >> M >> K >> Q;
    int wait[1024];
    int time[1024];
    int t = 0;
    int cur = 1;

    for(int i = 1; i <= K; i++)
    {
        cin >> time[i];
    }
    queue<int> q[22];
    memset(wait, 0, sizeof(wait));
    int shortQue = 0;
    int shortLen = 0;
    while(1)
    {
        while(shortLen < M && cur <= K)
        {
            q[shortQue].push(cur);
            cur++;
            shortLen = 10000;
            for(int i = 0; i < N; i++)
            {
                if( q[i].size() < shortLen)
                {
                    shortLen = q[i].size();
                    shortQue = i;
                }
            }
        }
        int close = 0;
        for(int i = 0; i < N; i++)
        {
            if(!q[i].empty())
            {
                time[q[i].front()]--;
                if(time[q[i].front()] == 0)
                {
                    wait[q[i].front()] = t + 1;
                    q[i].pop();
                    if(i == N - 1 && t >= 539)
                    {
                        close = 1;
                        break;
                    }
                    if(q[i].size() < shortLen)
                    {
                        shortLen = q[i].size();
                        shortQue = i;
                    }
                }
            }
        }
        if(close) break;
        t++;
    }

    while(Q--)
    {
        int q;
        cin >> q;
        if(wait[q] > 0)
        {
            printf("%02d:%02d\n", 8 + wait[q] / 60, wait[q] % 60);
        }else
            cout << "Sorry" << endl;
    }

    return 0;
}
