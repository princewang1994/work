// lianxi4_20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void line(char);
main()
{
	int n;
	char a;
	a='A';
	for(n=1;n<=6;n++)
	{
	  line(a);
	  printf("\n");
	  a++;
	}
	a='E';
	for(n=1;n<=5;n++)
	{
	  line(a);
	  printf("\n");
	  a--;
	}
}
void line(char a)
{  
	int i;

    for(i=1;i<=9;i++)
	{
		printf("%c ",a);
		a++;
		if(a=='J')
			a='A';
	} 
  
}