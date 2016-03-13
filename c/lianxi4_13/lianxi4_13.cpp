// lianxi4_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
	int i;
	for(i=10006;i<=99996;i=i+10)
	{
		if(i%3==0)
			printf("%d\n",i);
	}
}