#include <iostream>

using namespace std;

int main()
{
    double l,w,d,wt;
    int t,cont=0;
    cin>>t;
    while(t--) {
        cin>>l>>w>>d>>wt;
        if((l<=56 && w<=45 && d<=25 && wt<=7) || ((l+w+d)<=125 && wt<=7)) {
            cout<<1<<endl;
            cont++;
        }
        else
            cout<<0<<endl;
    }
    cout<<cont<<endl;
}
