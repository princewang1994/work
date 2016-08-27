#include <iostream>
#include <cmath>
using namespace std;

int exitPort[100005];

int main()
{
    int N;
    cin >> N;

    exitPort[1] = 0;

    int sum = 0;
    for(int i = 2; i <= N + 1; i++)
    {
        int road;
        cin >> road;
        sum += road;
        exitPort[i] = sum;
    }

    int M;
    cin >> M;
    while(M--)
    {
        int in, out;
        cin >> in >> out;

        if(sum - abs(exitPort[out] - exitPort[in]) > abs(exitPort[out] - exitPort[in]))
        {
            cout << abs(exitPort[out] - exitPort[in]) << endl;
        }
        else
            cout << sum - abs(exitPort[out] - exitPort[in]) << endl;
    }

    return 0;
}
