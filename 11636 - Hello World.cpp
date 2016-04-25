#include <iostream>

using namespace std;

int main()
{
    long int t,n,c=0,ln,cp;
    while(cin>>n && n>0) {
        ln=1;
        cp=0;
        while(ln<n) {
            ln*=2;
            cp++;
        }
        cout<<"Case "<<++c<<": "<<cp<<endl;
    }
}
