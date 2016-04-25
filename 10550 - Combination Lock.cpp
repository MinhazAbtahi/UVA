#include <iostream>
#include <cstdio>

using namespace std;

/*
    combination lock is a circle, so its 360 degree,
    2 times clockwise % 1 time anti clockwise = 360+360+360=1080
    as the lock has 40 calibaration, each calibaration = 360/40 = 9
*/

int main()
{
    unsigned int a,b,c,d, ans;
    while(scanf("%u %u %u %u", &a,&b,&c,&d) && (a || b || c || d))
    {
        ans = 1080;

        if(b>a) ans += (40+a-b)*9;
        else ans += (a-b)*9;
        if(b>c) ans += (40+c-b)*9;
        else ans += (c-b)*9;
        if(d>c) ans += (40+c-d)*9;
        else ans += (c-d)*9;

        printf("%u\n", ans);
    }
}
