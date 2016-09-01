<<<<<<< HEAD

/**
1.用vector实现，通过sort()进行排序，发现最后一个例子超时（需要在类里面重载<运算符）
2.改用数组实现，并用qsort()进行排序，发现还是超时（需要自己写compare()函数）

**/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
int N=0,C=0;
class Student
{
public:
    char id[10];
    char name[10];
    int grade;
    Student()
    {
        grade=-1;
    }
};
int compare1 (const void * a, const void * b)
{
            return ((Student*)a)->id>((Student*)b)->id?1:-1;
}
int compare2 (const void * a, const void * b)
{
            return ((Student*)a)->name>=((Student*)b)->name?1:-1;
}
int compare3 (const void * a, const void * b)
{

            return ((Student*)a)->grade>=((Student*)b)->grade?1:-1;
}
Student stu[100000];
int main()
{
    cin>>N>>C;
    Student temp;
    for(int i=0;i<N;i++)
    {
       // scanf("%s %s %d",stu[i].id,stu[i].name,&stu[i].grade);
        cin>>stu[i].id>>stu[i].name>>stu[i].grade;
    }
    switch(C)
    {
    case 1:
        qsort (stu, N, sizeof(Student), compare1);
        break;
    case 2:
        qsort (stu, N, sizeof(Student), compare2);
        break;
    case 3:
        qsort (stu, N, sizeof(Student), compare3);
        break;
    }

    for(int i=0;i<N;i++)
    {
        cout<<stu[i].id<<" "<<stu[i].name<<" "<<stu[i].grade<<endl;
=======
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct
{
    int id;
    char name[16];
    int grade;
} stu;

vector<stu> v;
int cmp1(stu s1, stu s2)
{
    return s1.id < s2.id;
}
int cmp2(stu s1, stu s2)
{
    int r = strcmp(s1.name, s2.name);
    if(r != 0)
    {
        return r < 0;
    }
    else return s1.id < s2.id;
}

int cmp3(stu s1, stu s2)
{
    if(s1.grade != s2.grade)
    {
        return s1.grade < s2.grade;
    }
    else return s1.id < s2.id;
}

int main()
{
    int N;
    int column;
    cin >> N >> column;
    int n = N;
    while(n--)
    {
        stu s;
        cin >> s.id >> s.name >> s.grade;
        v.push_back(s);
    }
    switch(column){
    case 1:
        sort(v.begin(), v.end(), cmp1);
        break;
    case 2:
        sort(v.begin(), v.end(), cmp2);
        break;
    case 3:
        sort(v.begin(), v.end(), cmp3);
        break;
    }

    for(int i = 0; i < N; i++)
    {
        printf("%06d %s %d\n", v[i].id, v[i].name, v[i].grade);
>>>>>>> ead268e952adb1204a75b25adbdf5731a39fefaf
    }
    return 0;
}
