#include <iostream>
#include <cstdio>

using namespace std;

/**
    /// Collatz conjecture

    Take any natural number n.
    If n is even, divide it by 2 to get n / 2.
    If n is odd, multiply it by 3 and add 1 to obtain 3n + 1.
    Repeat the process (which has been called "Half Or Triple Plus One", or HOTPO) indefinitely.
    The conjecture is that no matter what number you start with, you will always eventually reach 1.
    The property has also been called oneness.
**/

int main()
{
    long long a,b,n;
    long long max=(1<<31)-1;       // Equivalent to 2^1*2^31-1 in bitwise [range of Integer]
    unsigned int cases=0;

    while(scanf("%lld%lld", &a,&b)!=EOF)
    {
        if(a<0 && b<0)
            break;

        n=a;
        int cycleLength=0;

        for(;;)
        {
            if(n>max || n>b){
                //cycleLength++;
                break;
            }

            if(n==1){
                cycleLength++;
                break;
            }

            if (n&1==1)         // Equivalent to n%2 in bitwise,
            {
                n=3*n+1;
                cycleLength+=1;
            }
            else
            {
                n>>=1;          // Equivalent to n/=2 in bitwise, n=n/2^1 => n>>=1
                cycleLength++;
            }
        }
        printf("Case %u: A = %lld, limit = %lld, number of terms = %d\n", ++cases, a, b, cycleLength);
    }
}
