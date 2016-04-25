#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c) {
        if(a==b && b==c)
            cout<<"*"<<endl;
        else if(a==b && b!=c)
            cout<<"C"<<endl;
        else if(b==c && c!=a)
            cout<<"A"<<endl;
        else if(c==a && a!=b)
            cout<<"B"<<endl;
    }
}
