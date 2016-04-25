#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    double x,y,r,d;
    cin>>t;
    while(t--) {
        cin>>x>>y>>r;
        d=sqrt((x*x-0)+(y*y-0)); //coordinate distance formula
        cout<<fixed<<setprecision(2)<<r-d<<" "<<fixed<<setprecision(2)<<r+d<<endl;
    }
}
