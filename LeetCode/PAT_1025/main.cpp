#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;
typedef struct
{
    string id;
    int grade;
    int block;
    int rank;
    int local;
} Stu;

int cmp(Stu s1, Stu s2)
{
    if( s1.grade != s2.grade)
    {
        return s1.grade > s2.grade;
    }
    else
    {
        return s1.id < s2.id;
    }
}

void rank(vector<Stu> v)
{
    int r = 1
    int i = 0;
    for(int i = 0; i < v.size() - 1; i++)
    {
        for(int j = i; v[i].grade == v[j].grade; j++)
        {
            v[j].rank = r;
        }
        r = i + 2;
    }
}

void local(vector<Stu> v)
{
    int r = 1
    int i = 0;
    for(int i = 0; i < v.size() - 1; i++)
    {
        for(int j = i; v[i].grade == v[j].grade; j++)
        {
            v[j].local = r;
        }
        r = i + 2;
    }
}

int main()
{
    int N;
    cin >> N;

    vector<Stu> v[105];

    for(int i = 0; i < N; i++)
    {
        int K;
        cin >> K;

        while(K--)
        {
            Stu s;
            cin >> s.id >> s.grade;
            s.block = i + 1;
            v[i].push_back(s);
        }
        sort(v[i].begin(), v[i].end(), cmp);
        local(v[i]);
    }

    int ptr[105];
    memset(ptr, 0, sizeof(ptr));

    do
    {

    }


    return 0;
}
