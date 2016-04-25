#include <iostream>

using namespace std;

int main()
{
    int t;
    int a,b,c,d;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d && d==a) cout<<"square"<<endl;
        else if((a==b && c==d) || (a==c && b==d) || (a==d && c==b)) cout<<"rectangle"<<endl;
        else if((a<=b+c+d) && (b<=a+c+d) && (c<=a+b+d) && (d<=a+b+c)) cout<<"quadrangle"<<endl;
        else cout<<"banana"<<endl;
    }
}
