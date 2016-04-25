#include <iostream>

using namespace std;

int main()
{
    long long n,rev,ternary;
    int arr[1000];
    while(cin>>n) {
        if(n<0) break;
        if(n==0) cout<<0;
        int j=0;
        while(n!=0) {
            ternary=n%3;
            n=n/3;
            arr[j]=ternary;
            j++;
        }
        for(int i=j-1;i>=0;i--) {
            cout<<arr[i];
        }
        cout<<endl;
    }
}
