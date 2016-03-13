// iiiiiii.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"
char str[8]="abcdbcd";
void check(char *str_);
bool yes(int i,int x,char *str_);
main()
{
	char r[10];
	scanf("%s",r);
    check(r);
}
void check(char *str_)
{
	int i,x;
    x=strlen(str_);
	for(i=0;i<=7-x;i++)
		if(yes(i,x,str_))
			printf("%d-%d\n",i+1,i+x);        
}
bool yes(int i,int x,char *str_)
{
	int k,n=0;
    for(k=i;k<i+x;k++)
		if(str_[n++]!=str[k])
			return false;
	return true;
}
