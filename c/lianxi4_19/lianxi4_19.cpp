// lianxi4_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
void line1(int);
void line2(int);
main()
{
	int n;
	for(n=1;n<=9;n++)
	{
		line1(n);
		line2(n);
		printf("\n");
		
	}
printf("1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1\n");
}
void line1(int n)
{   int i;
	for(i=1;i<=10-n;i++)
		printf("  ");
	for(i=1;i<=n;i++)
		printf("%d ",i);	
}
void line2(int n)
{
    int i;
	for(i=n-1;i>=1;i--)
		printf("%d ",i);
}