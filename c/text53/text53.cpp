// text53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
int jie(int);
main()
{
	int m,n; 
	printf("����������");
	scanf("%d%d",&m,&n);
	printf("���Ϊ%d",jie(m)/(jie(m-n)*jie(n)));
}
int jie(int x)
{
	int i,p;
	p=1;
	for(i=1;i<=x;i++)
     p=p*i;	
	return p;
}