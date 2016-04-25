#include <iostream>

using namespace std;

int main()
{
    long long n,n2,rev,count;
    int t,i;
    while(cin>>t) {
        for(i=0;i<t;i++) {
            cin>>n;
            n2=n;
            count=0;
            while(1) {
                rev=0;
                while(n!=0) {
                    rev=rev*10+n%10;
                    n/=10;
                }
                if(rev==n2) break;
                else {
                    n=rev+n2;
                    n2=rev+n2;
                    count++;
                }
            }
            cout<<count<<" "<<n2<<endl;
        }
    }
    return 0;
}


