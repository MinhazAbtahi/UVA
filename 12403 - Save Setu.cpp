#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,T,K, totalAmount=0;
    string test;
    cin>>T;
    for(i=0;i<T;i++) {
        cin>>test;
        if(test=="donate") {
            cin>>K;
            totalAmount+=K;
        }
        else if(test=="report") {
            cout<<totalAmount<<endl;
        }
    }
}
