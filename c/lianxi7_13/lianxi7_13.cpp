// lianxi7_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
void str_delete(int,int);
char str[11]="wangyanjie";
main()
{
	int v,w;
	scanf("%d%d",&v,&w);
	str_delete(v,w);
    printf("%s",str);
}
void str_delete(int v,int w)
{
	int i;
	char *cp;
	for(cp=&(str[v-1]);*(cp+w)!='\0';cp++)
		*cp=*(cp+w);
	*cp='\0';
}
