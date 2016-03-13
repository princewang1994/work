// lianxi7_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
int inputnum(int*);
main()
{
    int num[100],l,i;
	l=inputnum(num);
	for(i=0;i<l-1;i++)
		printf("%d\n",num[i]);
}
int inputnum(int a[100])
{
	char x;
	int s,i=0;
    x=getchar();
	while(x!='\n')
	{
	    while((x<'0')||(x>'9'))
		{
			if(x=='\n')
				break;
	     	x=getchar();
		}
		s=0;
    	while((x>='0')&&(x<='9'))
		{
	    
            s=10*s+(int)(x-'0');
			x=getchar();
		}
        a[i++]=s;
	}
	return i;


}
