// OJ1016.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
main()
{
     long k=1,x,y,z,num[100],T,result[100][4];
	 scanf("%d",&T);
	 while(k<=T)
	 {
	    scanf("%d",&num[k]);
	    for(x=1;x<num[k];x++)
		    for(y=1;y<num[k];y++)
			    for(z=1;z<num[k];z++)
				   if(x*x+y*y+z*z==num[k])
				   {
					    result[k][1]=x;
						result[k][2]=y;
						result[k][3]=z;
						break;
				   }
		 k++;
	 }
	 for(x=1;x<=T;x++)
	 {
		 printf("%d %d %d\n",result[x][1],result[x][2],result[x][3]);
	 }
}