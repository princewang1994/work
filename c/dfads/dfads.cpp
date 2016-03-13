// dfads.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "math.h"
using namespace std;
/***
k(r)=1.273e-5*r^3-0.002441*r^2+0.8724*r;
b(r)=2.06e-6*r^3+0.003131*r^2-1.519*r;
t(lum,r)=k(r)*lum+b(r);




Linear model Poly3:
       f(x) = 5.523e-006*x^3 + 0.003419*x^2 -1.769*x + 222.7
Coefficients (with 95% confidence bounds):
       p1 =  5.523e-006  (1.002e-007, 1.095e-005)
       p2 =    0.003419  (-0.003936, 0.01077)
       p3 =      -1.769  (-4.859, 1.321)
       p4 =       222.7  (-171.5, 616.9)
**/
double k(int r)
{
    return 1.273e-5*pow(r,3)-0.002441*pow(r,2)+0.8724*r-101.3;
}
double b(int r)
{
    return 2.06e-6*pow(r,3)+0.003131*pow(r,2)-1.519*r+195.6;
}
double t(double r,double  lum)
{
    return k(r)*lum+b(r);
}

double t2(int r)
{
    return  5.523e-006*pow(r,3) + 0.003419*pow(r,2) -1.769*r + 222.7;
}
main()
{
    cout<<t2(600)<<endl;



    return 0;
	char num[100][200],a;
	int k=1,T,i[100],ii,j,n=0,kk,m;
	scanf("%d",&T);
	for(m=0;m<100;m++)
		i[m]=0;
	a=getchar();

	while(k<=T)
	{
	   	a=getchar();
		while(a!='\n')
		{
			if((a>='0')&&(a<='9'))
			{
				num[k][i[k]++]=a;
				a=getchar();
			}
			else
			    if(a=='\n')
					break;
				else
				    a=getchar();
		}
		k++;
	}

		for(kk=1;kk<=T;kk++)
		{
			for(ii=0;ii<i[kk]%4;ii++)
			     printf("%d",(int)(num[kk][n++]-'0'));
			if((i[kk]%4!=0)&&(i[kk]>4))
		      printf(",");
		    for(ii=1;ii<=(i[kk]-i[kk]%4)/4;ii++)
			{
			    for(j=n;j<=n+3;j++)
				{
				    printf("%d",(int)(num[kk][j]-'0'));
				}
			    if(j!=i[kk])
			        printf(",");
			    else
				    break;
				n+=4;
			}
			n=0;
			printf("\n");
		}
}
