#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    double m[3];
    int buy[3];
    string str[] = {"W", "T", "L"};
    for(int i= 0; i < 3; i++)
    {
       m[i] = 0;
    }
    for(int i= 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            double a;
            cin >> a;
            if(a > m[i])
            {
                m[i] = a;
                buy[i] = j;
            }
        }
    }

    for(int i= 0; i < 3; i++)
    {
        cout << str[buy[i]] << " ";
    }
    printf("%.2f\n",(0.65 * m[0] * m[1] * m[2] - 1) * 2 );
    return 0;
    int K1, K2;
    int E1[1024];
    double N1[1024];

    int E2[1024];
    double N2[1024];

    double NR[2048];

    memset(NR, 0, sizeof(NR));

    cin >> K1;
    for(int i = 0; i < K1; i++)
    {
        cin >> E1[i] >> N1[i];
    }
    cin >> K2;
    for(int i = 0; i < K2; i++)
    {
        cin >> E2[i] >> N2[i];
    }

    int cnt = 0;
    for(int i = 0; i < K1; i++)
    {
        for(int j = 0; j < K2; j++)
        {
            double product = N1[i] * N2[j];
            int e = E1[i] + E2[j];
            if(abs(NR[e]) < 0.001 && abs(product) > 0.001 && e != 0)
                cnt++;
            NR[e] += product;
        }
    }
    int first = 1;

    cout << cnt;
    for(int i = 2047; i >= 0; i--)
    {
        if(abs(NR[i]) > 0.001)
        {
            printf(" %d %.1f", i, NR[i]);
        }
    }


    return 0;
}
