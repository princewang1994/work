#include<iostream>
using namespace std;
int f(int,int);
int g(int x,int y)
{
	if(x==y)return 1;
	if(y==1)return 1;
	if(x<y)return 0;
	return f(x-y,y);
}
int f(int x,int y)
{
	if(x==1 || y==1)return 1;
	int s=0;
	for(int i=1;i<=y;i++)
        s+=g(x,i);
    return s;

}
int main()
{
	int T,M=7,N=3;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	  cin>>M>>N;
	  cout<<f(M,N)<<endl;
	}

    return 0;
}
