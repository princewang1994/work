#include <iostream>
#include <string.h>
using namespace std;
int value(char c)
{
    if( c >= 'a' && c <= 'z')
    {
        return c - 'a' + 10;
    }
    else
    {
        return c - '0';
    }
}
long long toDec(char * num, int radix)
{
    long long s = 0;
    for(int i = 0; num[i] != 0; i ++)
    {
        s *= radix;
        s += value(num[i]);
    }
    return s;
}

int main()
{

    char N1[12];
    char N2[12];

    int tag, radix;

    cin >> N1 >> N2 >> tag >> radix;

    if(tag == 2)
    {
        char tmp[20];
        strcpy(tmp, N1);
        strcpy(N1, N2);
        strcpy(N2, tmp);
    }

    int maxv = -1;

    for(int i = 0; N2[i] != 0; i++)
    {
        if(value(N2[i]) > maxv)
        {
            maxv = value(N2[i]);
        }
    }

    long long n1 = toDec(N1, radix);

    //cout << toDec(N1, radix) << endl;

    for(long long r = maxv + 1; r <= n1; r ++)
    {
        if( n1 == toDec(N2, r))
        {
            cout << r << endl;
            return 0;
        }
    }

    cout << "Impossible" << endl;



    return 0;
}
