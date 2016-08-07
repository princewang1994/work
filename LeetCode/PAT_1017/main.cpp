#include <iostream>
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
   // cout << h * 3600 + m * 60 + s << endl;
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

    cin >> N >> K;

    while(N --)
    {
        char str[10];
        Bank bank;
        cin >> str;
        cin >> bank.time;
        if(bank.time > 60)
            bank.time = 60;
        int h = (str[0] - '0') * 10 + str[1] - '0';
        int m = (str[3] - '0') * 10 + str[4] - '0';
        int s = (str[6] - '0') * 10 + str[7] - '0';
        bank.h = h;
        bank.m = m;
        bank.s = s;
        q.push(bank);
    }

    int n = 0;
    long wait = 0;
    while(!q.empty())
    {
        Bank b = q.top();
        q.pop();
        //cout << b.value() <<endl;
        if(b.value() < 8 * 3600)
        {
            wait += que[early] - b.value();
            que[early] += b.time * 60;
            int min = 9999999;
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
            continue;
        }
        else
        {
            wait += (que[early] >= b.value() ? que[early] - b.value() : 0);
            que[early] += b.time * 60;
            int min = 9999999;
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
        return;
    }
    printf("%.1f", double((int((double)wait/n/60 * 10+ 0.5)))/10);

    return 0;
}
