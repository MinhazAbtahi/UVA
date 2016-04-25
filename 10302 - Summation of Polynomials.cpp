#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/// (n^2 * (n + 1)^2)/4 will also do

#include<cstdio>

int n;

/// commenting it out for using faster way

long long poly(int n)
{
    long long sum = 0;
    for(long long i = 1; i <= n; i++)
    {
        sum += i * i * i;
    }
    return sum;
}


int main()
{
    while(scanf("%d", &n) == 1)
    {
        printf("%lld\n", poly(n));
    }

    /// another solution, bit faster
    /*
    long double n,sum;
    while(scanf("%Lf",&n)==1)
    {
        sum=(n*n*(n+1)*(n+1))/4;
        printf("%.0Lf\n",sum);
    }
    */
}
