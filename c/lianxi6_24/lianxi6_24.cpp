 // lianxi6_24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
	int i;
	char a[20],b[20],c[40],*p;
	printf("×Ö·û´®1\n");
	scanf("%s",a);
	printf("×Ö·û´®2\n");
	scanf("%s",b);
	i=0;
    for(p=a;*p!='\0';p++)
		c[i++]=*p;
	for(p=b;*p!='\0';p++)
		c[i++]=*p;
	c[i]='\0';
	printf("Êä³ö%s\n",c);
}