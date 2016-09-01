/**
    1058. A+B in Hogwarts (20)

    If you are a fan of Harry Potter, you would know the world of magic has its own currency system -- as Hagrid explained it to Harry, "Seventeen silver Sickles to a Galleon and twenty-nine Knuts to a Sickle, it's easy enough." Your job is to write a program to compute A+B where A and B are given in the standard form of "Galleon.Sickle.Knut" (Galleon is an integer in [0, 107], Sickle is an integer in [0, 17), and Knut is an integer in [0, 29)).

    Input Specification:

    Each input file contains one test case which occupies a line with A and B in the standard form, separated by one space.

    Output Specification:

    For each test case you should output the sum of A and B in one line, with the same format as the input.

    Sample Input:
    3.2.1 10.16.27
    Sample Output:
    14.1.28
**/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    long long G1,S1,N1;
    long long G2,S2,N2;
    scanf("%lld.%lld.%lld", &G1, &S1, &N1);
    scanf("%lld.%lld.%lld", &G2, &S2, &N2);


    long long sum1 = G1 * 17 * 29 + S1 * 29 + N1; //记住S1的是29不是17，晕死
    long long sum2 = G2 * 17 * 29 + S2 * 29 + N2;
    long long sum = sum1 + sum2;
    printf("%d.%d.%d\n", sum / (17 * 29), (sum % (17 * 29))/29, sum % 29);

    return 0;
}
