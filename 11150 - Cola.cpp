#include <iostream>

using namespace std;

int main()
{
    int n,a;
    while(cin>>n) {
        a=n;
        while(n>=3) {
            a+=n/3;
            n=(n/3)+(n%3);
        }
        if(n==2) a++;
        cout<<a<<endl;
    }
}
