#include <iostream>
#include <stdio.h>
using namespace std;
int sort(int a[],int len)
{
    bool flag=true;
    while(flag)
    {
        flag=false;
        for(int i=0;i<len-1;i++)
        if(a[i]<a[i+1])
        {
            int r=a[i];
            a[i]=a[i+1];
            a[i+1]=r;
            flag=true;
        }
    }
    int s=0;
    for(int i=0;i<len;i++)s+=a[i];
    return s;
}
bool yes(int m[],int len,int sum,int each)
{
      if(each==sum || sum==0)return true;
      int time=0,sum0;
      while(len-time>2)
      {
          int s=0;
          for(int i=0;i<len;i++)
             if(m[i]+s<=each && m[i]!=0)
             {
                 s=s+m[i];
                 m[i]=0;
                 time++;
             }
          if(s!=each)return false;
          sum0=sort(m,len);
          if(sort(m,len)==each)return true;
          if(!yes(m,len-time,sum0,each))return false;
      }
      return true;
}
int minLong(int a[],int len,int sum)
{    int i;
     int b[100000];
     for(i=1;i<=sum;i++)
     {
         for(int j=0;j<len;j++)b[j]=a[j];
         if(sum%i==0 && yes(b,len,sum,i))break;
     }
     return i;
}
int main()
{
    int T;
    int stick[100000];
    while(scanf("%d",&T)&&T)
    {
        for(int i=0;i<T;i++)
           scanf("%d",&stick[i]);
        int s=sort(stick,T);
        printf("%d\n",minLong(stick,T,s));
    }
    return 0;
}
