#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    string pt1[100],pt2[100], pt3;
    int t,q;
    while(cin>>t) {
        getchar();
        for(int i=0;i<t;i++) {
            getline(cin,pt1[i]);
            getline(cin,pt2[i]);
        }
        cin>>q;
        getchar();
        while(q--) {
            getline(cin,pt3);
            for(int i=0;i<t;i++) {
                if(pt1[i]==pt3) {
                    cout<<pt2[i]<<endl;
                }
            }
        }
    }
    return 0;
}
