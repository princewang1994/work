#include <iostream>
using namespace std;
int map[1000][1000];
int M,N;
void BFS(int m,int n)
{
    int x[10000],y[10000];
    int topx=0,rearx=0;
    int topy=0,reary=0;
    int state[]={-1,0,1};
    int tempx,tempy;
    x[rearx++]=m;y[reary++]=n;
    map[m][n]=0;
    while(topx<rearx && topy<reary)
    {
        tempx=x[topx++];tempy=y[topy++];
        for(int i=0;i<3;i++)
           for(int j=0;j<3;j++)
              if(tempx+state[i]>=0 && tempx+state[i]<M
              && tempy+state[j]>=0 && tempy+state[j]<N)

                if(map[tempx+state[i]][tempy+state[j]]==1)
                {
                 x[rearx++]=tempx+state[i];
                 y[reary++]=tempy+state[j];
                 map[tempx+state[i]][tempy+state[j]]=0;
                }

    }
}
int main()
{
    char c;
    cin>>M>>N;
    for(int i=0;i<M;i++)
       for(int j=0;j<N;j++)
       {
          cin>>c;
          if(c=='W')map[i][j]=1;
          else map[i][j]=0;
       }
    int water=0;
    for(int i=0;i<M;i++)
       for(int j=0;j<N;j++)
       {
          if(map[i][j])
          {BFS(i,j);water++;}
       }
    cout<<water<<endl;
    return 0;
}
