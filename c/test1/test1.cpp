// test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<stdio.h>
#define m 2000
main(){
	int i,j,n,a[m];
	printf("����������n:");
	scanf("%d",&n);
	j=0;
	printf("�������:");
	for(i=0;i<n;i++){
		scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++)
		if(a[i]<60)
			j=j+1;
	printf("%d",j);
}


