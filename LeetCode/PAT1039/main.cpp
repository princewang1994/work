#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
    cout<<islower('R')<<endl;
    return 0;
    char b1[2000];
    char b2[2000];

    cin>>b1>>b2;

    int cnt1[1000];
    int cnt2[1000];

    memset(cnt1,0,sizeof(cnt1));
    memset(cnt2,0,sizeof(cnt2));

    for(int i=0;b1[i]!=0;i++)
    {
        cnt1[b1[i]]++;
    }

    for(int i=0;b2[i]!=0;i++)
    {
        cnt2[b2[i]]++;
    }

    bool flag=true;
    int less=0;
    int more=0;

    for(int i=0;i<1000;i++)
    {
        if(cnt1[i]-cnt2[i]<0)
        {
            flag=false;
            less+=cnt2[i]-cnt1[i];
        }
        else
        {
            more+=cnt1[i]-cnt2[i];
        }
    }

    if(flag)
    {
        cout<<"Yes "<<more<<endl;
    }
    else{
        cout<<"No "<<less<<endl;
    }
    return 0;
}
