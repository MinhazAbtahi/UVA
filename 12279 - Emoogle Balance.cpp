#include <iostream>

using namespace std;

int main()
{
    int T;
    int n=0;
    while(cin>>T) {
        if(T==0)
            break;
        int arr[T];
        int zero=0, num=0;
        for(int i=0;i<T;i++) {
            cin>>arr[i];
        }
        for(int j=0;j<T;j++) {
            if(arr[j]==0)
                ++zero;
            else
                ++num;
        }
        cout<<"Case "<<++n<<": "<<num-zero<<endl;
    }
}
