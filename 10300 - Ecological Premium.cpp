#include <iostream>

using namespace std;

int main()
{
    long long t,n,a,b,c,sum;
    while(cin>>t) {
        while(t--) {
            sum=0;
            cin>>n;
            while(n--) {
                cin>>a>>b>>c;
                sum+=a*c;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
