// lianxi7_15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
void copy(char str1[20],char str2[20]);
main()
{
	char a[20],b[20],r[20],*p;
	int i;
	printf("ÊäÈë×Ö·û´®a\n");
	scanf("%s",a);
	printf("ÊäÈë×Ö·û´®b\n");
    scanf("%s",b);
	copy(r,a);
	copy(a,b);
	copy(b,r);
	printf("%s\n%s",a,b);	
}
void copy(char str1[20],char str2[20])
{
	char *p;
	int i=0;
	for(p=str2;*p!='\0';p++)
		str1[i++]=*p;
	str1[i]='\0';
}