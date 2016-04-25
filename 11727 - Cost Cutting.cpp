#include <iostream>

using namespace std;

int main()
{
    int T=0,i=0;
    int x,y,z;
    cin>>T;
    while(T--) {
        cin>>x>>y>>z;
        if((x>y && x<z)||(z<x && x<y))
            cout<<"Case "<<++i<<": "<<x<<endl;
        else if((y>x && y<z)||(z<y && y<x))
            cout<<"Case "<<++i<<": "<<y<<endl;
        else if((z>x && z<y)||(y<z && z<x))
            cout<<"Case "<<++i<<": "<<z<<endl;
    }
}
