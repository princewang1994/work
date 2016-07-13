#include <iostream>
#include <string.h>
using namespace std;

int gcd(int a,int b)
{
    return b==0 ? a : gcd(b,a%b);
}

int main()
{
    int N;

    cin>>N;

    int a[150];
    int b[150];
    int op[150];

    for(int i=0;i<N;i++)
    {
        char tmp[100];
        cin>>tmp;

            int s=0;
            int j;
            for(j=(tmp[0]=='-' ? 1 : 0); tmp[j]!='/';j++)
            {
                 s*=10;
                 s+=tmp[j]-'0';
            }
            j++;

            a[i]=s;

            s=0;
            for(;tmp[j]!=0;j++)
            {
                 s*=10;
                 s+=tmp[j]-'0';
            }
            b[i]=s;

        op[i]= tmp[0]=='-' ? -1 :1;
    }
/*
     for(int i=0;i<N;i++)
     {
         cout<<a[i]<<" "<<b[i]<<" "<<op[i]<<endl;
     }*/

     long product=1;
     for(int i=0;i<N;i++)
     {
         product*=b[i];
     }
     long sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=op[i]*(a[i]*product/b[i]);
    }

    int Int=sum/product;
    long aa=sum%product;
    long bb=product;


    if(aa==0)
        //if(Int!=0)
            cout<<Int<<endl;
    else
    {
        //if(Int!=0)
            cout<<Int<<" ";
        cout<<aa/gcd(aa,bb)<<'/'<<bb/gcd(aa,bb)<<endl;
    }




    return 0;
}
