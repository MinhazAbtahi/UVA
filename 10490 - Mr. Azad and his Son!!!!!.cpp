#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
    One Concept found: except '2' even numbers aren't perfect not prime provided the law
    11, 23, 29 are prime but not perfect
    Others primes <=31 are perfect

    if p is a prime & 2^p -1 is a prime then 2^(p-1)*(2^p -1 ) is a
    perfect number . And this is the solution.
**/

int main()
{
    unsigned long long perfectResult;
    unsigned int n;
    bool flag;
    int prime[] = {2, 3, 5, 7, 13, 17, 19, 31};     // size 8, sizeof(prime)/sizeof(*prime)
    int notPerfect[] = {11, 23, 29};

    while(scanf("%u", &n)==1)
    {
        if(n==0)
            break;

        perfectResult = (pow(2, (n-1))*(pow(2,n)-1));
        flag = false;

        for(int i=0; i<8; ++i)
        {
            if(prime[i]==n)
            {
                printf("Perfect: %llu!\n", perfectResult);
                flag = true;
            }
        }
        if(flag)
            continue;

        if (notPerfect[0] == n || notPerfect[1] == n || notPerfect[2] == n)
        {
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
}
