#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,s,r;
    while(scanf("%lf %lf %lf", &a,&b,&c)==3){
        if(a<=0 || b<=0 || c<=0) {
            printf("The radius of the round table is: %.3lf\n", 0.000);
        }
        else {
            s=(a+b+c)/2;
            r=s*(s-a)*(s-b)*(s-c);
            r=sqrt(r)/s;
            printf("The radius of the round table is: %.3lf\n", r);
        }
    }
}
