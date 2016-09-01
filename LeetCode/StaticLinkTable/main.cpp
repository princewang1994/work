#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char str[10000]="yan[wang]jie_is_[good]";
    vector<char> v;
    //v.push_back('0');

    int cur=0;

    for(int i=0;str[i]!=0;i++)
    {
        char c=str[i];
        if(c=='[')
        {
            cur=0;

        }else if(c==']')
        {
            cur=v.size();
        }
        else
        {
            v.insert(v.begin()+cur,c);
            cur=cur+1;
        }

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
    cout<<endl;
    }

    return 0;
}
