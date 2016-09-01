#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stdio.h>
#include <map>

using namespace std;

typedef struct
{
    string ID;
    string title;
    string author;
    vector<string> key;
    string pub;
    string year;
} Book;

int cmp(Book a, Book b)
{
    return a.ID < b.ID;
}
int main()
{

    Book book[10005];

    int N;

    cin>>N;
    cin.ignore();

    for(int i = 0; i < N; i++)
    {
        getline(cin, book[i].ID);
        getline(cin, book[i].title);
        getline(cin, book[i].author);

        string key;
        getline(cin, key);

        int index=0;
        do
        {
            index=key.find(' ');
            book[i].key.push_back(key.substr(0, index));
            key=key.substr(index+1, key.length());

        }while(index > 0);

        getline(cin, book[i].pub);
        getline(cin, book[i].year);
    }

    sort(book, book + N, cmp);

    for(int i=0; i<N; i++)
    {
        cout<<book[i].ID<<" |";
        cout<<book[i].title<<" |";
        cout<<book[i].pub<<" |";
        cout<<book[i].author<<" |";
        cout<<book[i].year<<endl;
    }



    system("pause");
    return 0;

}
