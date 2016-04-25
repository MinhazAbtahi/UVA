#include <iostream>

using namespace std;

int main()
{
    int t,n[50],c=0,stck,brick,sum;
    while(cin>>t) {
        if(t==0)
            break;
        brick=0;
        for(int i=0;i<t;i++) {
            cin>>n[i];
        }
        for(int i=0;i<t;i++) {
            brick+=n[i];
            stck=brick/t;
        }
        sum=0;
        for(int j=0;j<t;j++) {
            if(n[j]>stck) {
                sum+=(n[j]-stck);
            }
        }
        cout<<"Set #"<<++c<<endl<<"The minimum number of moves is "<<sum<<"."<<endl<<endl;;
    }
    return 0;
}
