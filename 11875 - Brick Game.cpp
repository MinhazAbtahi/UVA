#include <iostream>

using namespace std;

int main()
{
    int t,n,i=0,j=0;
    cin>>t;
    while(t--) {
        cin>>n;
        int pl[n];
        for(i=0;i<n;i++) {
            cin>>pl[i];
        }
        cout<<"Case "<<++j<<": "<<pl[n/2]<<endl;
    }
}
