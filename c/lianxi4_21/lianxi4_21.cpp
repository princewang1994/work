// lianxi4_21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void line1(char);
void line2(char);
void line3(char);
main()
{
	int n;
	char a;
	a='A';
	for(n=1;n<=6;n++)
	{
	  line1(a);
	  line2(a);
	  line3(a);
	  printf("\n");
	  a++;
	}
	a='E';
	for(n=1;n<=5;n++)
	{
	  line1(a);
      line2(a);
	  line3(a);
	  printf("\n");
	  a--;
	}
	
}
void line1(char a)
{  
	int i;
    char b;
    for(i=1;i<=9;i++)
	{
		printf("%c ",a);
		a++;
		if(a=='J')
			a='A';		
	}  
}
void line2(char a)
{
	int i;
	for(i=1;i<=(6-(a-'A'+1));i++)
	printf("  ");
	for(i=1;i<=2*(a-'A'+1)-1;i++)
	printf("%c ",a);
    for(i=1;i<=(6-(a-'A'+1));i++)
	printf("  ");
}
void line3(char a)
{
	int i,k;
    
    for(i=1;i<=9;i++)
	{
		printf("%c ",a+1);
		a++;
		if(a+1=='J')
			a='A'-1;	
	}

}