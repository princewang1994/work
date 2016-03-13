// lianxi116.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
bool back(char p[])
{
	int i,j;
	for(i=0;p[i]!='\0';i++)
	{
		i=i;
	}
	for(j=i-1;j>=0;j--)
		if(p[j]!=p[6-j])
			return false;
	return true;		
}
main()
{
	int i=0,j=0;
	char a,word[100][20];
	a=getchar();
	while(a!='*')
	{
    	while(a==' ')
		   a=getchar();
        while(a!=' '&&a!='*')
		{
			word[i][j++]=a;
			a=getchar();
		}
		word[i][j++]='\0';
        i++;
		j=0;           
	}
	for(j=0;j<i;j++)
		if(back(word[i]))
			printf("%s ",word[i]);
}
