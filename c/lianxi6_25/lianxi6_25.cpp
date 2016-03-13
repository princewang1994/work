// lianxi6_25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
main()
{
	char st1[21],st2[21],a;
	int k;
	k=0;
	while(a!=' ')
	{
		a=getchar();
        st1[k]=a;
		k++;
	}
	st1[k-1]='\0';
	k=0;
	while(a!='\n')
	{
		a=getchar();
		st2[k]=a;
		k++;
	}
    st2[k-1]='\0';
    for(k=0;st1[k]==st2[k];k++);
	printf("s1[%d]-s2[%d]=%d\n",k+1,k+1,(int)(st1[k]-st2[k]));
}