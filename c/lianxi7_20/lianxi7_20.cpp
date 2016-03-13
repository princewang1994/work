// lianxi7_20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
bool sq(int);
main()
{
	int x,y,z;
	for(x=1;x<=9;x++)
		for(y=x+1;y<=9;y++)
			for(z=y+1;z<=9;z++)
				if(sq(x*100+y*10+z))
					printf("%d\n",x*100+y*10+z);


}
bool sq(int a)
{
	int i;
	for(i=1;i<=a;i++)
		if(i*i==a)
			return true;
	return false;
}