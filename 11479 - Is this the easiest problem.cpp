#include <iostream>

using namespace std;

int main()
{
    long int a,b,c;
    int t, i;
    while(cin>>t) {
        if(t>0 && t<20) {
            for(i=1;i<=t;i++) {
                cin>>a>>b>>c;
                if(a+b>c && b+c>a && c+a>b) {
                    if(a==b && b==c && c==a)
                        cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
                    else if(a!=b && b!=c && c!=a)
                        cout<<"Case "<<i<<": "<<"Scalene"<<endl;
                    else if(a==b || b==c || c==a)
                        cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
                }
                else
                    cout<<"Case "<<i<<": "<<"Invalid"<<endl;
            }
        }
    }
}
