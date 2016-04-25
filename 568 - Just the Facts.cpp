#include <iostream>
#include <cstdio>

using namespace std;

/**
    We can solve this one using modular arithmetic. We need to find the first non-zero digit,
    so we divide our current value by 10 while the ones digit is 0.
    Instead of modding by 10 after multiplying by the next value in the factorial,
    we mod by 10 * 10000,
    because 10000 is our largest value and we do not want a loss of precision in the first non-zero digit.
**/

int N, fact[10010];

void factorialWithLastNonZero(int n)
{
    long long m=1;
    //fact[0]=fact[1]=1;

    for(int i=1; i<=n; i++)
    {
        m=m*i;              ///generating factorial, lyk 1*1=1, 1*2=2, 2*3=6, 6*4=24, 24*5=120...

        while(m%10==0)
        {
            m/=10;
        }
        m=m%100000;      ///for precision, lyk 1%10=1, 12%100=12, 9999%10000=9999.....
        fact[i]=m%10;
    }
}

int main()
{
    factorialWithLastNonZero(10000);

    while(scanf("%d", &N)==1)
    {
        printf("%5d -> %d\n", N, fact[N]);
    }
}
