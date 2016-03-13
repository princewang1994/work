// text53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
int jie(int);
main()
{
	int m,n; 
	printf("请输入数据");
	scanf("%d%d",&m,&n);
	printf("结果为%d",jie(m)/(jie(m-n)*jie(n)));
}
int jie(int x)
{
	int i,p;
	p=1;
	for(i=1;i<=x;i++)
     p=p*i;	
	return p;
}