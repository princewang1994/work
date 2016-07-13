#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int N;
    char stu[1024][16];
    int exam[1024];

   cin>>N;
   for(int i=0;i<N;i++)
   {
       char id[16];
       int test;
       int ex;
       cin>>id>>test>>ex;
       strcpy(stu[test],id);
       exam[test]=ex;
   }

   int n;
   cin>>n;
   while(n--)
   {
       int a;
       cin>>a;
       cout<<stu[a]<<" "<<exam[a]<<endl;
   }
}
