// fds.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
void change(char*);
main()
{
    char a[5];
	scanf("%s",a);
	change(a);
}
void change(char a1[5])
{
	int j;
	for(j=4;j>=0;j--)
		printf("%c",a1[j]);
}