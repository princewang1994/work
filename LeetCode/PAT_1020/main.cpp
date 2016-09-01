#include <iostream>
#include <stdio.h>
#include <algorithm>

typedef struct
{
    double store;
    double pay;
    double p;
} cookie;

int cmp(cookie a, cookie b)
{
    return a.p > b.p;
}
int main()
{
    int N,D;
    cin>>N>>D;
    cookie c[1024];

    for(int i=0;i<N;i++)
    {
        cin>>c[i].store;
    }


    for(int i=0;i<N;i++)
    {
        cin >> c[i].pay;
        c[i].p = c[i].pay / c[i].store;
    }

    sort(c,c+N,cmp);


    double p=0;
    int k=0;

    while(D - c[k].store >= 0)
    {
        D -= c[k].store;
        p += c[k].pay;
        k ++;
    }

    p += double(c[k].pay) / c[k].store * D;

    printf("%.2f\n", p);


    return 0;
}
