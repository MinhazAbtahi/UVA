#include <cstdio>

/**
    the formula is: (r-1)/n
    r = number of roads
    n = number of int allocated for naming
**/

int main()
{
    long int r,n,result;
    int i = 0;

    while(scanf("%ld %ld", &r, &n))
    {
        if(r==0 && n==0) break;

        result = (r-1)/n;

        if(result>26)
            printf("Case %d: impossible\n", ++i);
        else
            printf("Case %d: %ld\n", ++i, result);
    }
}
