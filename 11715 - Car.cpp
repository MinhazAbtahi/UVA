#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int T,i=0;
    double u,v,t,a,s;
    while(cin>>T) {
        if(T==0) break;
        switch(T) {
            case 1:
                cin>>u>>v>>t;
                a=(v-u)/t;
                s=(u*t)+.5*a*t*t;
                cout<<"Case "<<++i<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<a<<endl;
                break;
            case 2:
                cin>>u>>v>>a;
                t=(v-u)/a;
                s=(u*t)+.5*a*t*t;
                cout<<"Case "<<++i<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<t<<endl;
                break;
            case 3:
                cin>>u>>a>>s;
                v=sqrt((u*u)+2*a*s);
                t=(v-u)/a;
                cout<<"Case "<<++i<<": "<<fixed<<setprecision(3)<<v<<" "<<fixed<<setprecision(3)<<t<<endl;
                break;
            case 4:
                cin>>v>>a>>s;
                u=sqrt((v*v)-2*a*s);
                t=(v-u)/a;
                cout<<"Case "<<++i<<": "<<fixed<<setprecision(3)<<u<<" "<<fixed<<setprecision(3)<<t<<endl;
                break;
        }
    }
}
