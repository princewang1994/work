#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[10005];

    char c[10]="PATest";
    int cnt[6];

    memset(cnt, 0, sizeof(cnt));

    cin >> str;

    for(int i = 0; str[i] != 0; i ++)
    {
        switch(str[i])
        {
            case 'P': cnt[0] ++; break;
            case 'A': cnt[1] ++; break;
            case 'T': cnt[2] ++; break;
            case 'e': cnt[3] ++; break;
            case 's': cnt[4] ++; break;
            case 't': cnt[5] ++; break;
        }
    }

    int flag = 1;

    while(flag)
    {
        flag = 0;
        for(int i = 0; i < 6; i ++)
        {
            if( cnt[i] > 0)
            {
                cout<<c[i];
                flag = 1;
                cnt[i] --;
            }
        }
    }
    return 0;
}
