#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    float H,M;
    while(scanf("%f:%f", &H, &M))
    {
        if(H==0 && M==0)
            break;

        if(H==12)
            H=0;

        float H_angle=H*30.0+(M/60.0)*30.0;     /// 360/12=30
        float M_angle=M*6.0;                    /// 360/60=6

        printf("%.3f\n", abs(H_angle-M_angle)>180? \
               360.0-abs(H_angle-M_angle) : abs(H_angle-M_angle));
    }
}
