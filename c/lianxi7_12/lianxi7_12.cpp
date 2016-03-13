// lianxi7_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
main()
{
	char *p1,*p2,str1[20],str2[20];
	scanf("%s",str1);	
	p2=str2;
	for(p1=str1;p1<=str1+20;p1++)
		*(p2++)=*(p1);
	printf("%s",str2);
}