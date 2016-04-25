#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double ma,mb,mc,s,area;
    while(cin>>ma>>mb>>mc) {
        s=(ma+mb+mc)/2.0;
        area=(4.0/3.0)*sqrt(s*(s-ma)*(s-mb)*(s-mc));
        if(area>0){
            cout<<fixed<<setprecision(3)<<area<<endl;
        }
        else {
            area=-1;
            cout<<fixed<<setprecision(3)<<area<<endl;
        }
    }
}
