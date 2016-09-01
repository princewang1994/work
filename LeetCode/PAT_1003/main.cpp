#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

struct
{
    int v, w, next;
} node[250005];

int head[501];
int vst[501];
int ind = 1;
int team[501];
int _min = 1000000;
int maxt = -1;
int cnt=0;

int V, E, cur, save;

void init(int E)
{
    memset(head, 0, sizeof(head));
    memset(vst, 0, sizeof(vst));

    while( E --)
    {
        int a, b, w;
        cin >> a >> b >> w;
        node[ind].v = b;
        node[ind].w = w;
        node[ind].next = head[a];
        head[a] = ind ++;

        node[ind].v = a;
        node[ind].w = w;
        node[ind].next = head[b];
        head[b] = ind ++;
    }
    /*for(int i=0;i<V;i++)
    {
        for(int h = head[i]; h != 0; h = node[h].next)
        {
            cout << node[h].v << " ";
        }
        cout <<endl;

    }*/
}



void dfs(int v, int d, int dist, int t)
{
    //cout << v << " " << d << " " << dist << endl;
    if(v == d)
    {
        if( dist < _min )
        {
            _min = dist;
            maxt = t;
            cnt = 1;
        }
        else if( dist == _min )
        {
            if(t > maxt) maxt = t;
            cnt ++;

        }
        return;
    }


    for(int h = head[v]; h != 0; h = node[h].next)
    {
        int p = node[h].v;
        if( vst[p] == 0 )
        {
            vst[p] = 1;
            dfs(p, d, dist + node[h].w, t + team[p]);
            vst[p] = 0;
        }
    }

}

void bfs(int v, int d)
{
    queue<int> q;
    queue<int> dist;
    queue<int> tm;

    vst[v] = 1;
    q.push(v);
    dist.push(0);
    tm.push(team[v]);

    while(!q.empty())
    {
        int p = q.front();
        int d = dist.front();
        int t = tm.front();

        q.pop();
        dist.pop();
        tm.pop();

        if(p == v)
        {
            if( d < _min )
            {
                _min = d;
                maxt = t;
                cnt = 1;
            }
            else if( d == _min )
            {
                if(t > maxt) maxt = t;
                cnt ++;
            }
        }
        else
        {
            for(int h = head[p]; h != 0; h = node[h].next)
            {
                if(!vst[node[h].v])
                {
                    q.push(node[h].v);
                    dist.push( d + node[h].w);
                    tm.push( t + team[node[h].v]);

                    vst[node[h].v] = 1;
                }
            }
        }

    }
}
int main()
{


    cin >> V >> E >> cur >> save;

    for(int i = 0; i < V; i ++)
    {
        cin >> team[i];
    }

    init(E);

    bfs(cur, save);

    cout << cnt << " " << maxt << endl;

    return 0;
}
