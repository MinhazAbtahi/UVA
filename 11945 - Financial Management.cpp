#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int t,x,cs=0;
    cin>>t;
    while(t--) {
        double n,sum=0,avg,y;
        for(int i=0;i<12;i++) {
            cin>>n;
            sum+=n;
        }
        avg=sum/12.0;
        x=avg/1000.0;
        y=fmod(avg,1000);
        if(avg<=999.00)
            cout<<++cs<<" "<<"$"<<fixed<<setprecision(2)<<avg<<endl;
        else
            cout<<++cs<<" "<<"$"<<x<<","<<fixed<<setprecision(2)<<y<<endl;
    }
}
