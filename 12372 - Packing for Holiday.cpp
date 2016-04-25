#include <iostream>

using namespace std;

int main()
{
    int t=0, i=0;
    int l,w,h;
    cin>>t;
    while(t--){
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)
            cout<<"Case "<<++i<<": "<<"good"<<endl;
        else
            cout<<"Case "<<++i<<": "<<"bad"<<endl;
    }
}
