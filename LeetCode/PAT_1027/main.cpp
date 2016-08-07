#include <iostream>
#include <string.h>
using namespace std;

char valueOf(int a)
{
    if(a <= 9)
    {
        return a + '0';
    }
    else{
        return 'A' + a - 10;
    }
}

void change(int n, char * str, int k)
{
    while(n != 0)
    {
        str[k--] = valueOf(n % 13);
        n /= 13;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    char str[10];
    memset(str, '0', sizeof(str));
    str[0] = '#';
    str[7] = 0;
    change(a, str, 2);
    change(b, str, 4);
    change(c, str, 6);
    cout << str << endl;
    return 0;
}
