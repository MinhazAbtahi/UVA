#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i=0;
    string a;
    while(cin>>a) {
        if(a =="*")
            break;
        else if(a=="Hajj")
            cout<<"Case "<<++i<<": "<<"Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<++i<<": "<<"Hajj-e-Asghar"<<endl;
    }
}
