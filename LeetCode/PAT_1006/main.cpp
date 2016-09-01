/*
    第二次做本题，注意优先队列的使用方法
*/

#include <iostream>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;
class Sign
{
    public:
    char id[16];
    char in[10];
    char out[10];
};
class cmp1{
    public:
    int operator()(Sign s1, Sign s2)
    {
        return strcmp(s1.in, s2.in) > 0 ;
    }
};
class cmp2
{
    public:
    int operator()(Sign s1, Sign s2)
    {
        return strcmp(s1.out, s2.out) <= 0;
    }
};
int main()
{
    priority_queue<Sign, vector<Sign>, cmp1 > inq;
    priority_queue<Sign, vector<Sign>, cmp2 > outq;

    int N;
    cin >> N;
    while(N --)
    {
        Sign s;
        cin >> s.id >> s.in >> s.out;
        inq.push(s);
        outq.push(s);
    }

    cout << inq.top().id << " " << outq.top().id << endl;


    return 0;
}
