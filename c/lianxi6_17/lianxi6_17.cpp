// lianxi6_17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
main()
{
    int a[3][3],*p,i,j,r;
	bool flag;
    for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		    scanf("%d",&a[i][j]);
	flag=true;
	while(flag)
	{
		flag=false;
		for(p=&a[0][0];p<&a[2][2];p++)
			if(*p>*(p+1))
			{
				r=*p;
				*p=*(p+1);
				*(p+1)=r;
				flag=true;
			}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		   printf("%d ",a[i][j]);
	    printf("\n");
	}
		

}