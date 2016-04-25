#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x,y,z;
    while(cin>>x>>y) {
        if(x==-1 && y==-1)
            break;
        z = abs(x-y);
        if(z>50) {
            z = 100 - z;
        }
        cout<<z<<endl;
    }
}
