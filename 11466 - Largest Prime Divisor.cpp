#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    long long n, ans, i;
    int counter;

    while(scanf("%lld", &n)&& n!=0)
    {
        if(n<0)
            n = -n;

        ans = -1;
        counter = 0;

        int len = sqrt(n);
        for(i=2; i<=len && n!=1; i++) ///we can do i*i<=n instead of i<=sqrt(n)
        {
            while(n%i==0)
            {
                n/=i;
                ans=i;
            }
            if(ans==i) counter++;
        }

        if(n!=1 && ans!=-1)
        {
            ans = n;
        }
        else if(counter==1)
            ans = -1;

        printf("%lld\n", ans);
    }
}
