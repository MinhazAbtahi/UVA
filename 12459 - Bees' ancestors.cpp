#include <iostream>
#include <cstdio>

using namespace std;

long long int fib[100];

long long int recurse_fib(int n) //for finding n-th fibonacci number
{
   if (n == 0 || n == 1)
        return fib[n] = 1;
    else if (fib[n] != 0)
        return fib[n];
    else
        return fib[n] = recurse_fib(n-1)+ recurse_fib(n-2);
}

int main()
{
    int n;
    long long int ans;
    while(cin>>n){
        if(n==0) break;
        printf("%lld\n", recurse_fib(n));
    }
}
