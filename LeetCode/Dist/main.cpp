#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int N=6;
int V=5;
int dist[1024];

int INF=1000000;

struct
{
    int v;
    int w;
    int next;
} node[1024];

int head[1024];
int vst[1024];

void init()
{
    int index=1;
    memset(head, -1, sizeof(head));
    memset(vst, 0, sizeof(vst));
    memset(dist, INF, sizeof(dist));

    for(int i=0;i<N;i++)
    {
        int a, b, w;

        scanf("%d%d%d", &a, &b, &w);

        node[index].v=b;
        node[index].w=w;
        node[index].next=head[a];
        head[a]=index++;

        node[index].v=a;
        node[index].w=w;
        node[index].next=head[b];
        head[b]=index++;
    }

}
void disp()
{
    for(int i=0;i<N;i++)
    {
        for(int h=head[i]; h!= -1; h=node[h].next)
        {
            printf("%d ", node[h].v);
        }
        printf("\n");
    }

    for(int i=0;i<V;i++)
    {
        printf("%d ", dist[i]);
    }

}

void dj(int a)
{
    dist[a]=0;
    int n=V-1;
    while(n--)
    {
        int min=INF;
        int cur=0;

        for(int i=0; i < V; i++)
        {
            if(dist[i] < min && !vst[i])
            {
                min=dist[i];
                cur=i;
            }
        }

        vst[cur]=1;

        for(int h=head[cur]; h!=-1; h=node[h].next)
        {
            int w=node[h].w;
            int v=node[h].v;

            if(dist[cur] + w < dist[v])
            {
                dist[v] = dist[cur] + w;
            }
        }
    }
}

void spfa(int a)
{
    queue<int> q;

    dist[a]=0;

    vst[a]=1;
    q.push(a);

    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        vst[p]=0;

        for(int h=head[p]; h!=-1; h=node[h].next)
        {
            int v=node[h].v;
            int w=node[h].w;

            if(dist[p] + w < dist[v])
            {
                dist[v] = dist[p] + w;
                if(!vst[v])
                {
                    vst[v]=1;
                    q.push(v);
                }
            }
        }
    }

}
int main()
{

    init();

    spfa(0);

    disp();

    system("pause");
    return 0;
}
