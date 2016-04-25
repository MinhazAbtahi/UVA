#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1);

int main()
{
    double l,w,r,recArea,circArea;
    int T=0;
    cin>>T;
    while(T--) {
        r=0;
        cin>>l;
        w=(l*6)/10;
        r=l/5;
        circArea=PI*r*r;
        recArea=(l*w)-circArea;
        cout<<fixed<<setprecision(2)<<circArea<<" "<<fixed<<setprecision(2)<<recArea<<endl;
    }
}
