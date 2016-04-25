#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define MAX 1000001

// This array will be filled with 0 and 1, 0 for prime & 1 for not prime
char isPrime[MAX];

void PrimeGenerator(int n)
{
    int nSqrt = sqrt(n);
    isPrime[0] = isPrime[1] = 1;    // 0, 1 not prime

    for(int i = 4; i <= n; i+=2)
    {
        isPrime[i] = 1;             // eliminating all even number as they r not prime except 2
    }

    for(int i = 3; i <= nSqrt; i+=2)
    {
        if(isPrime[i] == 0)
        {
            for(int j = i*i; j <= n; j+=i)
            {
                isPrime[j] = 1;     // eliminating all the factors
            }
        }
    }

    return;
}

int n;

int main()
{

    PrimeGenerator(1000000);

    while(scanf("%d", &n))
    {
        if(n == 0) break;

        int count = 0;

        for(int i = 2; i<=n/2; i++)
        {
            if(isPrime[i] == 0 && isPrime[n-i] == 0)
            {
                count++;
            }

        }

        printf("%d\n", count);

    }
}

