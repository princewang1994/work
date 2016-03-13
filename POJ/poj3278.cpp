#include <iostream>
#include <queue>
using namespace std;
int visted[1000000];
int step[1000000];
int BFS(int x,int y)
{
    if(x>=y)return x-y;
    queue<int> q;
    int temp;
    q.push(x);
    step[x]=0;
    visted[x]=1;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp-1==y || temp+1==y || temp*2==y)return step[temp]+1;
        if(temp>0)
           if(visted[temp-1]!=1)
           {
            q.push(temp-1);
            visted[temp-1]=1;
            step[temp-1]=step[temp]+1;
           }
        if(temp!=0 && temp<200000)//这句很重要！！！！一直爆内存啊有木有！！
           if(visted[2*temp]!=1)
           {
               q.push(2*temp);
               visted[2*temp]=1;
               step[temp*2]=step[temp]+1;
           }
        if(visted[temp+1]!=1)
        {
            q.push(temp+1);
            visted[temp+1]=1;
            step[temp+1]=step[temp]+1;
        }
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<BFS(x,y)<<endl;
    return 0;
}
