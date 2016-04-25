#include <iostream>

using namespace std;

int main()
{
    int a,n;
    while(cin>>n) {
        if(n==0) break;
        a=0;
        while(n>=3) {
            a+=n/3;
            n=(n/3)+(n%3);
        }
        if(n==2) a++;
        cout<<a<<endl;
    }
}
