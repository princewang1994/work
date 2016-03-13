// zhangyizhong.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
	char num[100][200],a;
	int k=1,T,i=0,ii,j,n=0,kk;
	scanf("%d",&T);
	while(k<=T)
	{
		a=getchar();
		while(a!='\n')
		{
			if((a>='0')&&(a<='9'))
			{
				num[k][i++]=a;
				a=getchar();
			}
			else
			    if(a=='\n')
					break;
				else
				    a=getchar();
		}
		for(ii=0;ii<i%4;ii++)
			printf("%d",(int)(num[k][n++]-'0'));
		printf(",");
		for(kk=1;kk<=T;k++)
		{
		    for(ii=1;ii<=(i-i%4)/4;ii++)
			{
			    for(j=n;j<=n+4;j++)
				    printf("%d",num[k][n++]);
			    if(n!=i)			
			        printf(",");
			    else
				    break;
			}
		}


	}

}
