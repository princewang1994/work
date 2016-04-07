#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    int cnt[20000];
    int pos=20000,num;
    memset(cnt,0,sizeof(cnt));
    int max=-1;
    cin>>n;
    while(n--)
    {
        cin>>num;
        cnt[num]++;
        if(cnt[num]>max){

            max=cnt[num];
            pos=num;
        }
        else if(cnt[num]==max)
        {
            if(num<pos)
            {
                pos=num;
            }
        }
    }
    cout<<pos<<endl;
    return 0;
}
