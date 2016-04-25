#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, result;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n;
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        n = abs(n);
        result = (n/10)%10;
        cout<<result<<endl;
    }
}
