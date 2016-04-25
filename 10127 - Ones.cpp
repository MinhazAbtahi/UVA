#include <iostream>

using namespace std;

int main()
{
    long n,count,i;
    while(cin>>n){
        i=1;
        count=1;
        while(i){
            i=((i*10)+1)%n;
            count++;
        }
        cout<<count<<endl;
    }
}

