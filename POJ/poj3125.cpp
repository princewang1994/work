#include <iostream>
#include <vector>
#include <stdio.h>
#include <fstream>
using namespace std;
class File
{
    public:
    int num;
    int position;
};
class Printer
{
    private:
    vector<File> q;
    int count;
    int myposition;
    bool my;
    public:
    Printer(int c,int p):count(c),myposition(p)
    {
        my=1;
        File temp;
        for(int j=0;j<count;j++)
        {
          scanf("%d",&temp.num);
          temp.position=j;
          q.push_back(temp);
        }

    }
    bool have_larger(int);
    void solve();
};
bool Printer::have_larger(int k)
{
    for(int i=0;i<q.size();i++)
       if(q.at(i).num>k)
          return true;
    return false;
}
void Printer::solve()
{
    vector<File>::iterator it;
    int time=0;
    while(my==1)
    {
        File temp;
        temp=q.front();
        it=q.begin();
        q.erase(it);
        if(have_larger(temp.num))
        {
            q.push_back(temp);
        }
        else
        {
            time++;
            if(temp.position==myposition)
               my=0;
        }

    }
    printf("%d\n",time);

}
int main()
{
    int T,count,my;

    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int position;
        scanf("%d%d",&count,&position);
        Printer p(count,position);
        p.solve();

    }




    return 0;
}

