#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
      int a[100];
      cout<<"输入十个数"<<endl;
      for(int i=0;i<10;i++)
      {
          cin>>a[i];
      }
      sort(a,a+10,cmp);
      for(int i=0;i<10;i++)
         cout<<a[i]<<endl;
	  system("pause");
      return 0;
}
