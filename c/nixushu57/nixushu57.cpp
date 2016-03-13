// nixushu57.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
int nixu(int);
main()
{
	int n;
    scanf("%d",&n);   
    printf("%d",nixu(n));
	getchar();
	getchar();
	getchar();
	getchar();

}
int nixu(int n)
{ 
	int s,r;
	s=0;
	do
	{	    
	r=n%10;
	n=n/10;
	s=s*10+r;
	}while(n!=0);
	return s;
}