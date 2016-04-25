#include <iostream>

using namespace std;

int main()
{
    int T=0,tCase=0,n,speed,max;
    cin>>T;
    while(T--) {
        max=0;
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>speed;
            if(speed>max) {
                max=speed;
            }
        }
        cout<<"Case "<<++tCase<<": "<<max<<endl;
    }
}
