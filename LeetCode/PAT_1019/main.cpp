#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    char N[10];
    cin>>N;

    if( N[0] == N[1] && N[0] == N[2] && N[0] == N[3])
    {
        cout << N <<" - " << N << " = 0000" << endl;
        return 0;
    }

    while(strcmp(N, "6174"))
    {
        char a[5],b[5];

        strcpy(a, N);
        strcpy(b, N);

        sort(a, a + 4, greater<char>());
        sort(b, b + 4, less<char>());

        int aa = atoi(a);
        int bb = atoi(b);
        char rr[10];

        sprintf(rr, "%04d", aa - bb);
        cout << a <<" - " << b << " = " << rr << endl;

        sprintf(N, "%04d",aa - bb);
    }
    return 0;
}
