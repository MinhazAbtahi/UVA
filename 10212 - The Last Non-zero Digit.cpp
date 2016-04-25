#include <iostream>
#include <cstdio>

#define LL long long

using namespace std;

/**
    Given the high time limit (10 seconds) and the moderate bound on N, it's OK to do this in O(N).

    Multiply all numbers from N to N-M+1 together to get N P M. Of course, this will be extremely large,
    so after every multiplication, keep taking % 10 while possible to remove trailing zeros,
    and then take % 1000000000 to keep only the necessary non-zero digits.
    You need to keep one more digit than the largest digit you multiply by to avoid losing information.

    Use longs for all calculations. At the end, output the result % 10.

    Watch out for M = 0. Output 1 in this case.

**/

int main()
{
    LL a,b;
    while(cin>>a>>b)
    {
        if(b==0) cout<<1<<endl;
        else
        {
            LL ans = 1;
            LL c = a-b+1;
            for(LL i=a; i>=c; i--)
            {
                ans*=i;

                while(ans%10==0)
                    ans/=10;

                ans%=1000000000;

            }
            cout<<ans%10<<endl;
        }
    }
    return 0;
}
