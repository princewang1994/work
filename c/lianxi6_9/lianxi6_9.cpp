// lianxi6_9.cpp : Defines the entry point for the console application.
//判断矩阵是否为对称矩阵

#include "stdafx.h"
#include "stdio.h"
bool yes(int a1[5][5]);
main()
{
	int a[5][5],n,i,j;
	bool flag;
	for(i=0;i<5 ;i++)
	{
		for(j=0;j<5;j++)
		   scanf("%d",&a[i][j]);
	}//输入数据
    if(yes(a))
		printf("yes");
	else
		printf("no");
}
bool yes(int a1[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			if(a1[i][j]!=a1[j][i])
				return false;
    return true;
}
