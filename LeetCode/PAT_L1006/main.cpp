#include <iostream>

using namespace std;

int div(int n, int d[])
{
    int k=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            d[k++]=i;
        }
    }
    return k;
}

int main()
{
    int d[1024];
    int n=630;
    int k=div(n,d);
    for(int i=0;i<k;i++)
    {
        cout<<d[i]<<endl;
    }

    int dp[256][256];
    int l[256][256];
    int h[256][256];

    for(int i=0;i<k;i++)
    {
        dp[i][i]=1;
        l[i][i]=i;
        h[i][i]=i;
    }


    for(int m=1;m<k;m++)
    {
        for(int i=0;i+m<k;i++)
        {
            int a=i;
            int b=i+m;
           // cout<<i<<" "<<i+m<<endl;
            for(int t=a;t<=b;t++)
            {
                if(d[h[a][t]]+1 == d[l[t+1][b]])
                {
                    int prod=1;

                    for(int tt=l[a][t];tt<=h[t+1][b];tt++) prod*=d[tt];

                    if (n % prod == 0 && dp[a][t]+dp[t+1][b]>dp[a][b])
                    {
                        l[a][b]=l[a][t];
                        h[a][b]=h[t+1][b];
                        dp[a][b]=dp[a][t]+dp[t+1][b];
                    }
                    else
                    {
                        if(n%prod != 0)
                        {
                            if(dp[a][t]<dp[t+1][b])
                            {
                                dp[a][b]=dp[t+1][b];
                                l[a][b]=l[t+1][b];
                                h[a][b]=h[t+1][b];
                            }
                            else
                            {
                                dp[a][b]=dp[a][t];
                                h[a][b]=h[a][t];
                                l[a][b]=l[a][t];
                            }

                        }
                    }


                }
                else
                {
                        if(dp[a][t]<dp[t+1][b])
                        {
                            dp[a][b]=dp[t+1][b];
                            l[a][b]=l[t+1][b];
                            h[a][b]=h[t+1][b];
                        }
                        else
                        {
                            dp[a][b]=dp[a][t];
                            h[a][b]=h[a][t];
                            l[a][b]=l[a][t];
                        }

                }

            }
        }
    }

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<h[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
