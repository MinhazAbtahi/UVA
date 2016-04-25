#include <cstdio>

int main()
{
    unsigned int n;
    unsigned long long fib[55];

    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<55; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    while(scanf("%u", &n)==1)
    {
        if(n==0) break;
        printf("%llu\n", fib[n+1]);
    }

    return 0;
}
