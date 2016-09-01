#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

long long ex[100];

int exp(long long n)
{
    int e = 0;
    while(n  > 0)
    {
        e += 1;
        n /= 10;
    }
    return e - 1;
}

long long pow(int n)
{
    int prod = 1;
    for(int i = 0; i < n; i++)
    {
        prod *= 10;
    }
    return prod;
}

long long f(long long n)
{
    if(n == 0)
        return 0;
    if(n < 10)
        return 1;
    int e = exp(n);

    long long e10 = pow(e);

    if(n % e10 == 0)
        return ex[e] + 1;

    int first = n / e10;

    if(first == 1)
        return f(n % e10) + (n % e10 + 1) + ex[e];
    return f(n % e10) + e10 + first * ex[e];

}
int main()
{
    long long n;
    scanf("%d", &n);

    int e = exp(n);
    ex[1] = 1;
    for(int i = 2; i <= e; i++)
    {
        ex[i] = 10 * (ex[i - 1]) + pow(i - 1);
    }

    printf("%d", f(n));


    return 0;
}
