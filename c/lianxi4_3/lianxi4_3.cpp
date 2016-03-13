// lianxi4_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "math.h"
int jie(int);
main()
{   
	float x,s;
    int i;
	printf("«Î ‰»Îx");
	scanf("%f",&x);
	s=1;
	for(i=1;i<=20;i++)	
     s=s+(pow(x,i)/(float)jie(i));
	printf("s=%f",s);
}
int jie(int k)
{
	int i,p;
	p=1;
	for(i=1;i<=k;i++)
	{
		p=p*i;
	}
	return p;
}