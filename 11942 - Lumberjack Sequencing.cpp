#include <iostream>

using namespace std;

int main()
{
    int t,n,nPre;
    bool asc, dsc;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--) {
        asc=dsc=true;
        cin>>nPre;
        for(int i=1;i<10;i++) {
            cin>>n;
            if(n>nPre) {
                dsc=false;
            }
            else if(n<nPre) {
                asc=false;
            }
            nPre=n;
        }
        if(asc || dsc) {
            cout<<"Ordered"<<endl;
        }
        else
            cout<<"Unordered"<<endl;
    }
}
