#include <iostream>
#include <algorithm>
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
    int a,b;
    while(scanf("%d%d", &a,&b)!=EOF)
    {
        int temp_a=a;
        int temp_b=b;

        if(a>b) swap(a,b);

        int max_cycleLength=0;
        int cycleLength;

        for(int i=a; i<=b; i++)
        {
            unsigned int n=i;
            cycleLength=1;

            /*
            while(n!=1)
            {
                if(n%2==1)
                {
                    n=3*n+1;
                }
                else
                    n/=2;
                cycleLength++;
            }
            */

            /// For faster solution
            while (n!=1 )
            {
                if (n&1==1)         // Equivalent to n%2 in bitwise,
                {
                    n=3*n+1;
                    n>>=1;          // Equivalent to n/=2 in bitwise, n=n/2^1 => n>>=1
                    cycleLength+=2;
                }
                else
                {
                    n>>=1;          // Equivalent to n/=2 in bitwise, n=n/2^1 => n>>=1
                    cycleLength++;
                }
            }

            if(cycleLength>max_cycleLength)
            {
                max_cycleLength=cycleLength;
            }
        }
        printf("%d %d %d\n", temp_a, temp_b, max_cycleLength);
    }
}
