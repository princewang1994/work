

#include <iostream>
#include <stdio.h>
#include <queue>
#include <stdio.h>
#include <string.h>
using namespace std;


class Bank
{
public:
  int h;
  int m;
  int s;
  int time;

public:
  int value() const
  {
    return h * 3600 + m * 60 + s;
  }


  bool operator < (Bank b) const
  {
     return value() > b.value();
  }
};


int main()
{
    int N,K;
    int que[101];
    for(int i = 0; i < 101; i ++)
    {
        que[i] = 8 * 3600;
    }
    int early = 0;

    priority_queue<Bank> q;

    scanf("%d", &N);
    scanf("%d", &K);

    while(N--)
    {
        Bank bank;
        if(bank.time > 60)
            bank.time = 60;
        scanf("%d:%d:%d", &bank.h, &bank.m, &bank.s);
        scanf("%d", &bank.time);
        q.push(bank);
    }

    int n = 0;
    long wait = 0;
    while(!q.empty())
    {
        Bank b = q.top();
        q.pop();
        if(b.value() < 8 * 3600)
        {
            wait += que[early] - b.value();
            que[early] += b.time * 60;
            int min = 0x3f3f3f3f;
            int index = 0;
            for(int i = 0; i < K; i++)
            {
               if( que[i] < min )
               {
                   index = i;
                   min = que[i];
               }
            }
            early = index;
        }
        else if(b.value() > 17 * 3600)
        {
            break;
        }
        else
        {
            if(que[early] > b.value())
            {
                wait += que[early] - b.value();
                que[early] += b.time * 60;
            }
            else
            {
                que[early] = b.value() + b.time * 60;
            }
            int min = 0x3f3f3f3f;
            int index = 0;
            for(int i = 0; i < K; i++)
            {
               if( que[i] < min )
               {
                   min = que[i];
                   index = i;
               }
            }
            early = index;
        }

        n ++;
    }
    if( n == 0 )
    {
        printf("0.0\n");
        return 0;
    }
    printf("%.1f", double((int((double)wait/n/60 * 10+ 0.5)))/10);

    return 0;
}
