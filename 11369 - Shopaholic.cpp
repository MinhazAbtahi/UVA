#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,cases=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[20002];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        int discount=0;
        for(int i=n-3;i>=0;i-=3){
            discount+=arr[i];
        }
        cout<<discount<<endl;
    }
}
