// lianxi6_23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
main()
{
	char st[31],a;
    int k,i,n;
	k=0;
	while(a!='\n')
	{
		a=getchar();
		st[k]=a;
		k++;
	}
	st[k-1]='\0';
	for(n=k-2;n>=0;n--)
		printf("%c",st[n]);


}
