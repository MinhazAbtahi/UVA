#include <iostream>

using namespace std;

int main()
{
    long long n, sum;
    while(cin>>n){
        if(n==0)
            break;
        sum=0;
        for(int i=1;i<=n;i++){
            sum+=i*i;
        }
        cout<<sum<<endl;
    }
}
