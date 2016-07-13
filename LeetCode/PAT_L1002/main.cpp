#include <iostream>

using namespace std;

int cal(int dest, int *diff)
{
    int sum=1;
    int n=1;
    while(sum+4*n+2<=dest)
    {
        sum+=4*n+2;
        n++;
    }
    (*diff)=dest-sum;
    return n;
}

int main()
{
    int n;
    char c;
    cin>>n>>c;

    int diff;

   // n=100;
   // c='*';

    int lev=cal(n,&diff);

    for(int i=0;i<lev;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*(((lev-1)*2+1)/2-i)+1;j++)
            cout<<c;
        cout<<endl;
    }


    for(int i=lev-2;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*(((lev-1)*2+1)/2-i)+1;j++)
            cout<<c;
        cout<<endl;
    }

    cout<<diff<<endl;


    return 0;
}
