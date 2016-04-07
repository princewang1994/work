#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cin>>str;
    int num[100];


    char d=str[12];

    int k=1;

    for(int i=0;i<12;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num[k++]=str[i]-'0';
        }
    }

    int sum=0;
    for(int i=1;i<=9;i++)
    {
        sum+=num[i]*i;
    }
    //cout<<sum<<endl;
    sum=sum%11;
    //cout<<sum<<endl;
    if(sum==10)
    {
        if(d=='X')
            cout<<"Right"<<endl;
        else
        {
            for(int i=0;i<12;i++)
                cout<<str[i];
            cout<<'X'<<endl;
        }
    }
    else
    {
        if(d-'0'==sum)
            cout<<"Right"<<endl;
        else
        {
            for(int i=0;i<12;i++)
                cout<<str[i];
            cout<<sum<<endl;
        }
    }


    return 0;
}
