#include <iostream>
#include <queue>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

char m[100][100];

int r,c,x,y;

int visit[100][100];


int d[][2]={{-1,0},{1,0},{0,-1},{0,1}};

typedef struct{
    int x;
    int y;
}Pos;

void dfs(int x,int y)
{

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            visit[i][j]=0;
        }
    }
    queue<Pos> q;
    Pos s;
    s.x=x;
    s.y=y;
    q.push(s);
    //
    bool first=1;

    while(!q.empty())
    {
        Pos cur=q.front();
        q.pop();
        visit[cur.x][cur.y]=1;

        if(first && )
        {

        }
        if(m[cur.x][cur.y]=='S' || m[cur.x][cur.y]=='+' || m[cur.x][cur.y]=='T')
        {
            for(int i=0;i<4;i++)
            {
                int xx=cur.x+d[i][0];
                int yy=cur.y+d[i][1];
                if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && visit[xx][yy]==0)
                {
                    Pos p;
                    p.x=xx;
                    p.y=yy;
                    q.push(p);
                }
            }
        }

        if(m[cur.x][cur.y]=='-')
        {
            for(int i=2;i<4;i++)
            {
                int xx=cur.x+d[i][0];
                int yy=cur.y+d[i][1];
                if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && visit[xx][yy]==0)
                {
                    Pos p;
                    p.x=xx;
                    p.y=yy;
                    q.push(p);
                }
            }
        }

        if(m[cur.x][cur.y]=='|')
        {
            for(int i=0;i<2;i++)
            {
                int xx=cur.x+d[i][0];
                int yy=cur.y+d[i][1];
                if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && visit[xx][yy]==0)
                {
                    Pos p;
                    p.x=xx;
                    p.y=yy;
                    q.push(p);
                }
            }
        }

        if(m[cur.x][cur.y]=='.')
        {

            int xx=cur.x+d[1][0];
            int yy=cur.y+d[1][1];
            if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && visit[xx][yy]==0)
            {
                Pos p;
                p.x=xx;
                p.y=yy;
                q.push(p);
            }

        }
    }

}


void dfs2(int x,int y)
{
    int v[100][100];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            v[i][j]=0;
        }
    }
    queue<Pos> q;
    Pos s;
    s.x=x;
    s.y=y;
    q.push(s);
    //

    while(!q.empty())
    {
        Pos cur=q.front();
        q.pop();
        v[cur.x][cur.y]=1;

        if(m[cur.x][cur.y]=='T')
        {
            visit[x][y]=0;
            //cout<<x<<" "<<y<<endl;
            break;
        }
        if(m[cur.x][cur.y]=='S' || m[cur.x][cur.y]=='+')
        {
            for(int i=0;i<4;i++)
            {
                int xx=cur.x+d[i][0];
                int yy=cur.y+d[i][1];
                if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && v[xx][yy]==0)
                {
                    Pos p;
                    p.x=xx;
                    p.y=yy;
                    q.push(p);
                }
            }
        }

        if(m[cur.x][cur.y]=='-')
        {
            for(int i=2;i<4;i++)
            {
                int xx=cur.x+d[i][0];
                int yy=cur.y+d[i][1];
                if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && v[xx][yy]==0)
                {
                    Pos p;
                    p.x=xx;
                    p.y=yy;
                    q.push(p);
                }
            }
        }

        if(m[cur.x][cur.y]=='|')
        {
            for(int i=0;i<2;i++)
            {
                int xx=cur.x+d[i][0];
                int yy=cur.y+d[i][1];
                if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && v[xx][yy]==0)
                {
                    Pos p;
                    p.x=xx;
                    p.y=yy;
                    q.push(p);
                }
            }
        }

        if(m[cur.x][cur.y]=='.')
        {

            int xx=cur.x+d[1][0];
            int yy=cur.y+d[1][1];
            if(xx>=0 && xx<r && yy>=0 && yy<c && m[xx][yy]!='#' && v[xx][yy]==0)
            {
                Pos p;
                p.x=xx;
                p.y=yy;
                q.push(p);
            }

        }
    }

}

int main()
{

    freopen("data.txt","r",stdin);
    cin>>r>>c;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>m[i][j];
            if(m[i][j]=='S')
            {
                x=i;
                y=j;
            }
        }
    }


    dfs(x,y);

    /*
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

                cout<<visit[i][j]<<" ";

        }
        cout<<endl;
    }*/

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(visit[i][j])
            {
                dfs2(i,j);
            }
        }

    }

    int ans=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            ans+=visit[i][j];
        }
    }
    cout<<ans<<endl;

    /*for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {

                cout<<visit[i][j]<<" ";

        }
        cout<<endl;
    }*/


    return 0;
}
