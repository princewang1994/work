// lianxi7_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"
main()
{
	char str[20];
	int i;
    while(strcmp(str,"#")!=0)
	{
		scanf("%s",str);
		if(strcmp(str,"#")==0)
			break;
	    for(i=1;str[i]!='\0';i++);
		printf("³¤¶ÈÎª%d\n",i);
	}
}