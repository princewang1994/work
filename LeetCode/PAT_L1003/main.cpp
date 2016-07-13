#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char numStr[1024];

    cin>>numStr;

    int cnt[10];
    memset(cnt,0,sizeof(cnt));

    for(int i=0;numStr[i]!=0;i++)
    {
        cnt[numStr[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(cnt[i]!=0)
        {
            cout<<i<<":"<<cnt[i]<<endl;
        }
    }
    return 0;
}
