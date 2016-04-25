#include <iostream>

using namespace std;

int main()
{
    int t,e,f,c,sum,tB,rB;
    cin>>t;
    while(t--){
        cin>>e>>f>>c;
        sum=0;
        tB=e+f;
        while(tB>=c){
            rB=tB/c;
            sum+=rB;
            tB=rB+(tB%c);
        }
        cout<<sum<<endl;
    }
}
