// LIANXI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
int gcd(int,int);
int h(int);
int b;
main()
{   
	int n,a,m,x;
	printf("«Î ‰»În");
	scanf("%d",&n);
	m=h(n);
	x=b;
	printf("%d\n",x/gcd(m,x));
	printf("----------\n");
	printf("%d",m/gcd(m,x));
}
int h(int n)
{   
	int i,a;
    a=1;
	b=1;
	for(i=2;i<=n;i++)
	{
	  b=b*i+a;
	  a=a*i;
	}
	return a; 
}
int gcd(int x,int y)
{
	int r;
	r=3;
	while(r!=0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}