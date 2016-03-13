// insert_sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
main()
{
	int a[10],i,j,w=0,min=0,r;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(w=0;w<9;w++)
	{
		min=a[w];
        for(j=w;j<10;j++)
			if(a[j]<=a[min])
				min=j;
        r=a[min];
		a[min]=a[w];
		a[w]=r;
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);


}
