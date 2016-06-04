#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    int M;
    cin>>N;
    while(N--)
    {
        cin>>M;

        char id [10000][16];
        int first=1000000;
        int f;
        int last=0;
        int l;
        for(int i=0;i<M;i++)
        {
            char come[9];
            char go[9];
            cin>>id[i]>>come>>go;

            go[2]=come[2]=0;
            go[5]=come[5]=0;

            int a=atoi(come);
            int b=atoi(come+3);
            int c=atoi(come+6);
            if (a*3600+b*60+c < first)
            {
                first=a*3600+b*60+c;
                f=i;
            }


            a=atoi(go);
            b=atoi(go+3);
            c=atoi(go+6);
            if(a*3600+b*60+c>last)
            {
                last=a*3600+b*60+c;
                l=i;
            }


        }


        cout<<id[f]<<" ";


        cout<<id[l]<<endl;

    }
    return 0;
}
