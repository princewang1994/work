// lianxi6_19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
int a[21][21],n;

main()
{   
	int i,j,k,m;
	printf("«Î ‰»În\n");
	scanf("%d",&n);
	k=1;
	m=1;
	while(k<=n*n)
	{
      for(j=m;j<=n-m+1;j++)
	  {
		  a[m][j]=k;
		  k++;
	  }
	  for(i=m+1;i<=n-m+1;i++)
	  {
		  a[i][n-m+1]=k;
		  k++;
	  }
	  for(j=n-m;j>=m;j--)
      {
		  a[n-m+1][j]=k;
		  k++;
	  }
	  for(i=n-m;i>=m+1;i--)
	  {
		  a[i][m]=k;
		  k++;
	  }
	  m++;
	}
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	        printf("%3d",a[i][j]);
		printf("\n");
    }
	
}
