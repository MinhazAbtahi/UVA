#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
    The fastest way to cross is to just aim for the other shore
    and not care about how far the river pushes you downstream.
    So the time for the fastest path is just d / u.

    The shortest way to cross is of course a straight line,
    so you must aim the boat upstream such that you exactly counteract the river's flow.
    The leftover power will get you across, so by Pythagoras,
    the time for the shortest path is d / sqrt(u^2 - v^2).

    As we can see from the above equations,
    if u == 0, or u < v,
    then you can't determine the difference because you have undefined or unreal results.
    Also, you cannot determine the difference if v == 0 because then the two paths would not be different,
    as the problem requires.
**/

int main()
{
    int t,cases = 0;

    double u,v,dist,t1,t2,tD;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf%lf%lf",&dist,&v,&u);
        if(v==0 || u == 0 || v >=u)
        {
            printf("Case %d: can't determine\n",++cases);
            continue;
        }
        t1 = (1.0*dist)/(u*1.0);
        t2 = (1.0*dist)/(sqrt((u*u)-(v*v))*1.0);

        tD = fabs(t2-t1);

        printf("Case %d: %.3lf\n",++cases,tD);
    }
}
