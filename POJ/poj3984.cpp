#include <iostream>
#include <queue>
#include <stdio.h>
#include <fstream>
using namespace std;
class xy
{
    public:
    int x;
    int y;
    xy* front;
    xy(){}
    xy(int X,int Y,xy* f):x(X),y(Y){front=f;}
};
void solve(int map[5][5])
{
    queue<xy> q;
    int cnt=0;
    xy temp(0,0,NULL);
	xy* r;
    xy*p;
    xy a[25];
    map[temp.x][temp.y]=1;
    q.push(temp);
    while(temp.x!=4 || temp.y!=4)
    {
        temp=q.front();
        
        if(temp.x>0 && map[temp.x-1][temp.y]==0)
        {
			r=new xy(0,0,0);
		    *r=temp;
            map[temp.x-1][temp.y]=1;
            q.push(xy(temp.x-1,temp.y,r));
        }
         if(temp.x<4 && map[temp.x+1][temp.y]==0)
        {
			r=new xy(0,0,0);
		    *r=temp;
            map[temp.x+1][temp.y]=1;
            q.push(xy(temp.x+1,temp.y,r));        
		 }
        if(temp.y>0 && map[temp.x][temp.y-1]==0)
        {
			r=new xy(0,0,0);
		    *r=temp;
            map[temp.x][temp.y-1]=1;
            q.push(xy(temp.x,temp.y-1,r));        
		}
        if(temp.y<4 && map[temp.x][temp.y+1]==0)
        {
			r=new xy(0,0,0);
		    *r=temp;
            map[temp.x][temp.y+1]=1;
            q.push(xy(temp.x,temp.y+1,r));        
		}
        q.pop();
    }
    for(p=&temp;p->front!=0;p=p->front)
        a[cnt++]=*p;
	printf("(0, 0)\n");
    for(int i=cnt-1;i>=0;i--)
        cout<<"("<<a[i].x<<", "<<a[i].y<<")"<<endl;
}
int main()
{
    int map[5][5];
    for(int i=0;i<5;i++)
       for(int j=0;j<5;j++)
          scanf("%d",&map[i][j]);



    solve(map);
    return 0;
}

