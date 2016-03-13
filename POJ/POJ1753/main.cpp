#include <iostream>
#include <stdio.h>
#include <fstream>
#include <queue>
using namespace std;
class Map
{
    public:
    int map[5][5];
    int step;
    bool visit[5][5];
    Map(){}
    Map(int m[5][5],int s=0)
    {
        for(int i=1;i<=4;i++)
           for(int j=1;j<=4;j++)
              map[i][j]=m[i][j];
        for(int i=1;i<=4;i++)
           for(int j=1;j<=4;j++)
              visit[i][j]=0;
    }
    Map Transfer(int x,int y);
    bool IsWin();
};
Map Map::Transfer(int x,int y)
{
    Map temp=*this;
    temp.map[x][y]=!temp.map[x][y];
    if(x>1)temp.map[x-1][y]=!temp.map[x-1][y];
    if(y>1)temp.map[x][y-1]=!temp.map[x][y-1];
    if(x<4)temp.map[x+1][y]=!temp.map[x+1][y];
    if(y<4)temp.map[x][y+1]=!temp.map[x][y+1];
    temp.visit[x][y]=true;
    temp.step=step+1;
	return temp;
}
bool Map::IsWin()
{
    if(map[1][1])
    {
       for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
          if(map[i][j]==false)return false;
       return true;
    }

    else
    {
       for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
          if(map[i][j]==true)return false;
       return true;
    }

}
int main()
{
    int map[5][5];
    char c;
    for(int i=1;i<=4;i++)
    {
       for(int j=1;j<=4;j++)
       {
           cin>>c;
           if(c=='b')map[i][j]=1;
           else map[i][j]=0;
       }
    }
    queue<Map> q;
    q.push(Map(map));
    Map temp;
    while(!temp.IsWin())
    {
       temp=q.front();
       for(int i=1;i<=4;i++)
          for(int j=1;j<=4;j++)
          if(temp.visit[i][j]==0)
          {
              q.push(temp.Transfer(i,j));
          }
        q.pop();
    }
    cout<<temp.step<<endl;

}
