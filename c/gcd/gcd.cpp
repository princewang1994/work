// gcd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
//�����Լ�����㷨
main()
{   int a,b,r;
	scanf("%d%d",&a,&b);
	r=3;
	while(r!=0)
	{
	r=a%b;
	a=b;
	b=r;
	}
	printf("%d",a);
    
}
