#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int convert(const char * n, int radix)
{
    int s = 0;
    for(int i = 0; n[i] != 0; i++)
    {
        s *= radix;
        s += (n[i] - '0');
    }
    return s;
}
int isP(int N)
{
    if(N < 2)
        return 0;
    for(int i = 2; i <= N / 2; i++)
    {
        if(N % i == 0)
            return 0;
    }
    return 1;
}
char charOf(int a)
{
    if(a<10)
        return a + '0';
    else
        return a - 10 + 'a';
}
void itoa(int a, char * n, int radix)
{
    int k = 0;
    while(a > 0)
    {
        n[k++] = charOf(a % radix);
        a /= radix;
    }
    n[k] = 0;
}
int main()
{
    while(1)
    {
        string num;
        int radix;
        cin >> num;
        if(convert(num.c_str(), 10) >= 0)
        {
            cin >> radix;
            string tmp = num;
            char n[100];
            int a = convert(num.c_str(), 10);
            if(!isP(a))
            {
                cout << "No" << endl;
                continue;
            }

            itoa(a, n, radix);
            int b = convert(n, radix);
            if(isP(b))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            break;
    }
    return 0;
}
