#include "iostream"
#include "stdio.h"
using namespace std;
class Name
{
	public:
    char name[20];
	Name*next;
};
int main()
{
	int num,i=0,w,s,t,k;
    Name *head=0,*p,*r;
	scanf("%d",&num);
	for(int k=0;k<num;k++)
    {
   	    p=new Name;
		scanf("%s",p->name);
		if(head==NULL)
		{
		   head=p;
		   p->next=p;
		}
		else
		{
		for(r=head;r->next!=head;r=r->next);
		r->next=p;
		p->next=head;
		}


   	}
	scanf("%d",&w);
	getchar();
	scanf("%d",&s);
       for(r=head,t=1;t<w;r=r->next,t++);
	int m=0;
	if(s==1)
       for(k=0,p=r;k<num;k++,p=p->next)
          printf("%s\n",p->name);
    else
    {
 	   while(m++<num)
	   {
       int t;
        for(p=r,t=1;t<s-1;p=p->next,t++);

	   printf("%s\n",p->next->name);

       p->next=p->next->next;
       r=p->next;
	}
    }



	return 0;
}
