#include <iostream>

using namespace std;

long recurse(long n)
{
    if(n<10) return n;
    int sum=0, mod =0;
    while(n>0) {
        mod=n%10;
        sum+=mod;
        n=n/10;
    }
    return recurse(sum);
}

int main()
{
    long n,result;
    while(cin>>n) {
        if(n==0) break;
        else
            result=recurse(n);
        cout<<result<<endl;
    }
}
