// yuanxin.cpp : Defines the entry point for the console application.
//此程序为给定abc三点坐标球外接圆心坐标和
#include "stdafx.h"外接圆半径

#include"stdio.h"
#include"math.h"
float b;
float right(float,float,float,float);
float away(float,float,float,float);
main()
{   float k1,k2,b1,b2,xa,ya,xb,yb,xc,yc,x0,y0;
	printf("输入ABC坐标");
	scanf("%f%f%f%f%f%f",&xa,&ya,&xb,&yb,&xc,&yc);
	k1=right(xa,ya,xb,yb);
	b1=b;
	k2=right(xb,yb,xc,yc);
	b2=b;
	x0=(b2-b1)/(k1-k2);
	y0=k1*x0+b1;
	printf("圆心坐标为(%f,%f)\n",x0,y0);
	printf("半径为%f",away(x0,y0,xb,yb));
}
float right(float x1,float y1,float x2,float y2)
{
	float xm,ym,k;
	xm=(x1+x2)/2;
	ym=(y1+y2)/2;
	k=(x2-x1)/(y1-y2);
	b=ym-k*xm;
	return k;

}
float away(float x1,float y1,float x2,float y2)
{
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}