#include <iostream>
#include <stdio.h>
using namespace std;

const int N=1796;

int main()
{
    int level[N+1];

    int parent[N+1];

    freopen("lev.csv","r",stdin);

    freopen("out","w",stdout);

    for(int i=1;i<=N;i++)
    {
        int id;
        scanf("%d",&id);
        scanf("%d",&level[i]);
    }

    int last[5];

    last[0]=0;

    for(int i=1;i<=N;i++)
    {
        last[level[i]]=i;
        printf("update dictionary set parent=%d where dic_id=%d;\n",last[level[i]-1],i);
    }
    return 0;
}
