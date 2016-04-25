#include <iostream>

using namespace std;

int main()
{
    long long n;
    int arr[1000],j,count;
    while(cin>>n) {
        if(n==0) break;
        j=0;
        while(n!=0) {
            arr[j]=n%2;
            n/=2;
            j++;
        }
        count=0;
        cout<<"The parity of ";
        for(int i=j-1;i>=0;i--) {
            cout<<arr[i];
            if(arr[i]==1)
                count++;
        }
        cout<<" is "<<count<<" (mod 2)."<<endl;
    }
}
