#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Student
{
public:
    int grade;
    int name;
};

class cmp
{
public:
    bool operator() (const Student &s1, const Student &s2)
    {
        return s1.grade < s2.grade;
    }
};
int main()
{
    priority_queue<int, vector<Student>, cmp > q;

    int n;
    cin >> n;
    while(n--)
    {
        Student s;
        cin >> s.grade;
        cin >> s.name;
        q.push(s);
    }

    while(!q.empty())
    {
        cout << q.top().grade << endl;
        q.pop();
    }
    return 0;
}
