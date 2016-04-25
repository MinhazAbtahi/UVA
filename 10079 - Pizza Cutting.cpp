#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long i,n,result;
    for(;;) {
        scanf("%ld", &n);
        if(n<0) break;
        result=(n*(n+1))/2+1;
        printf("%ld\n", result);
    }
}
