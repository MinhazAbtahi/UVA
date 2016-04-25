#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,i,count;
    while(cin>>a>>b) {
        if(a==0 && b==0)
            break;
            count = 0;
        for(i=a;i<=b;i++) {
            c=sqrt(i);
            if(c*c==i)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
