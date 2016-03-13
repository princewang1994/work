// eee.cpp : Defines the entry point for the console application.
//
#include "iostream"
#include "stdafx.h"
#include "stdio.h"
using namespace std;
int YangHui(int x,int y)
{
    if(y==1)return 1;
    if(y==x)return 1;
    return YangHui(x-1,y-1)+YangHui(x-1,y);
}
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<YangHui(i,j)<<" ";
        cout<<endl;
    }
}
