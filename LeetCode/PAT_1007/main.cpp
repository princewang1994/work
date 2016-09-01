#include <iostream>
#include <string.h>
using namespace std;

int N;
int A[10005];
int ** dp;
int ** h;
int ** l;

void init()
{
    dp = new int *[N];
    h = new int *[N];
    l = new int *[N];

    for(int i = 0; i < N; i ++)
    {
        dp[i] = new int[N];
        h[i] = new int[N];
        l[i] = new int[N];

        for(int j = 0; j < N; j++)
        {
            dp[i][j] = 0;
            h[i][j] = l[i][j] = 0;
            if( j == i)
            {
                dp[i][j] = A[i];
                h[i][j] = l[i][j] = i;
            }
        }

    }
}
void print()
{
    for(int i=0 ;i< N; i ++)
    {
        for(int j=0 ;j < N; j ++)
        {
            cout << dp [i][j] << "\t";
        }
        cout <<endl;
    }
    cout <<endl;

    for(int i=0 ;i< N; i ++)
    {
        for(int j=0 ;j < N; j ++)
        {
            cout << l [i][j] << "\t";
        }
        cout <<endl;
    }

    cout <<endl;
    for(int i=0 ;i< N; i ++)
    {
        for(int j=0 ;j < N; j ++)
        {
            cout << h [i][j] << "\t";
        }
        cout <<endl;
    }
    cout <<endl;
}

int sum(int a, int b)
{
    int s = 0;
    for(int i = a; i <= b; i ++)
    {
        s += A[i];
    }
    return s;
}

void maxSeq()
{
    for(int m = 1; m < N; m ++)
    {
        for(int i = 0; i + m < N; i ++)
        {
            int a = i;
            int b = i + m;

            int mx = -1;
            int ll = 0;
            int hh = 0;
            for(int t = a; t < b; t ++)
            {
                int s_at = sum(l[a][t], h[a][t]);
                int s_t1b = sum(h[t+1][b], h[t+1][b]);

                if(h[a][t] + 1 == l[t+1][b])
                {
                    if(s_at + s_t1b > mx)
                    {
                        mx = s_at + s_t1b;
                        ll = l[a][t];
                        hh = h[t+1][b];
                    }
                    else
                    {
                        mx = max(s_at, s_t1b);
                        ll = s_at > s_t1b ? l[a][t] : l[t+1][b];
                        hh = s_at > s_t1b ? h[a][t] : h[t+1][b];
                    }
                }
                else
                {
                    mx = max(s_at, s_t1b);
                    ll = s_at > s_t1b ? l[a][t] : l[t+1][b];
                    hh = s_at > s_t1b ? h[a][t] : h[t+1][b];
                }
            }

            dp[a][b] = mx;
            l[a][b] = ll;
            h[a][b] = hh;
        }
    }
}
void del()
{
    for(int i = 0; i < N; i ++)
    {
        delete dp[i];
        delete h[i];
        delete l[i];
    }
    delete dp;
    delete h;
    delete l;
}
int main()
{
    cin >> N;

    for(int i = 0; i < N; i ++)
    {
        cin >> A[i];
    }

    init();
    maxSeq();
   // print();

    cout << dp[0][N-1] << " " << A[l[0][N-1]] << " " << A[h[0][N-1]] <<endl;
    del();
    return 0;
}
