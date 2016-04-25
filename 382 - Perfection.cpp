#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, sum, x=0;

    while(scanf("%d", &n))
    {
        if(n==0) break;
        if(x!=1)
        {
            printf("PERFECTION OUTPUT\n");
            x=1;
        }

        sum=0;
        for(int i=1; i<=n/2; i++)
        {
            if(n%i==0)
                sum+=i;
        }

        if(sum==n){
            printf("%5d  PERFECT\n", n);
        }
        else if(sum>n){
            printf("%5d  ABUNDANT\n", n);
        }
        else
            printf("%5d  DEFICIENT\n", n);
    }
    printf("END OF OUTPUT\n");
}
