// keke.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
main()
{
    int i,n,r,s,num;
	bool flag;
	for(i=100;i<=1000;i++)
	{
		s=0;
		num=i;
        while(num!=0)
		{
			r=num%10;
			num=num/10;
			s=s+r;
		}
		if(s==9&&i%5==0)
			printf("%d\n",i);
	}
}