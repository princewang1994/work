// lianxi7_14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
	int length;
	char str[20],*p,r;
	scanf("%s",str);
	for(length=0;str[length]!='\0';length++) ;
	for(p=str;p<&(str[length/2]);p++)
	{
		r=*p;
	    *p=str[length-1-(p-str)];
        str[length-1-(p-str)]=r;
	}
	printf("%s",str);
}