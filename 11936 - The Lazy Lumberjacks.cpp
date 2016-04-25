#include <iostream>

using namespace std;

int main()
{
    long int a,b,c;
    int t;
    cin>>t;
    while(cin>>a>>b>>c) {
        if(a+b>c && b+c>a && c+a>b)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
}
