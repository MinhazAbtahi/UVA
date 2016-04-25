#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0 && b==0 && c==0)
            break;
        else if(a*a == b*b + c*c)
            cout<<"right"<<endl;
        else if(b*b == a*a + c*c)
            cout<<"right"<<endl;
        else if(c*c == b*b + a*a)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
}
