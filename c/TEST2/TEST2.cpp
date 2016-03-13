// TEST2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<stdio.h>
#define m 5
#define n 4
main(){
	int i,j,sum,r,k,a[m][n];
    for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			scanf("%d",&(a[i][j]));
	}
	sum=0;
	for(r=0;r<m;r++)
		sum=sum+(a[r][0])+(a[r][n]);
	for(k=1;k<n;k++)
		sum=sum+(a[0][k])+(a[m][k]);
	printf("ºÍ:%d",sum);
}