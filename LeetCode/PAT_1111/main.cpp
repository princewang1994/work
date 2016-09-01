#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
typedef struct
{
    int v;
    int next;
    int len;
} edge;

int index = 1;
edge e[2 * 512 * 512];

int lenHead[512];
int timeHead[512];

void init()
{
    memset(lenHead, 0, sizeof(lenHead));
    memset(timeHead, 0, sizeof(timeHead));

    int S, N;
    cin >> S >> N;
    while(N--)
    {
        int v1, v2, oneWay, len, time;
        cin >> v1 >> v2 >> oneWay >> len >> time;

        e[index].v = v2;
        e[index].len = len;
        e[index].next = lenHead[v1];
        lenHead[v1] = index++;


        e[index].v = v2;
        e[index].len = time;
        e[index].next = timeHead[v1];
        timeHead[v1] = index++;

        if(!oneWay)
        {
            e[index].v = v1;
            e[index].len = len;
            e[index].next = lenHead[v2];
            lenHead[v2] = index++;

            e[index].v = v1;
            e[index].len = time;
            e[index].next = timeHead[v2];
            timeHead[v2] = index++;
        }
    }
    /*
    for(int i = 0; i < S; i++)
    {
        for(int h = lenHead[i]; h != 0; h = e[h].next)
        {
            cout << e[h].v << " ";
        }
        cout << endl;
    }*/
}

void spfa()
{

}
int main()
{
    int k = 3;
    while(k--)
    {
        int a, b;
        char str[10];
        scanf("%d#%d#%s", &a, &b, str);
        cout << a << endl;
        cout << b << endl;
        cout << str << endl;
    }
 //   init();
    return 0;
}
