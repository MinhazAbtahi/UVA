#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
    We don't care about the borders, so we need to fill in an (n-2)*(m-2) area.
    Each sonar controls a 3x3 area,
    so the answer is ceil((n-2)/3) * ceil((m-2)/3).
**/

int main()
{
    int n,m,t,s;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n,&m);
        s = ceil((n-2)/3.0) * ceil((m-2)/3.0);
        printf("%d\n", (int)s);
    }
}


