#include <iostream>
#include <cstdio>

using namespace std;

long long happy(int n)
{
    long long s=0;
    if(n<=9)
        return n;
    while(n!=0)
    {
        s+=((n%10)*(n%10));
        n/=10;
    }
    return happy(s);
}

int main()
{
    int t, cases=0;
    scanf("%d", &t);

    while(t--)
    {
        long long n;
        scanf("%lld", &n);

        if(n==7)
            printf("Case #%d: %lld is a Happy number.\n", ++cases, n);
        else if(happy(n)==1)
            printf("Case #%d: %lld is a Happy number.\n", ++cases, n);
        else
            printf("Case #%d: %lld is an Unhappy number.\n", ++cases, n);
    }
}
