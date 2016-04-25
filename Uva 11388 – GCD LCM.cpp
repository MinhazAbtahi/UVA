#include <iostream>
#include <cstdio>

using namespace std;

/*
 * lcm(a,b) = a.b/gcd(a,b)
 * => lcm(a,b).gcd(a,b) = a.b
 * so a = gcd(a,b), b = lcm(a,b) [bcz a is minimized and gcd(a,b)<=lcm(a,b)]
*/

int main()
{
    long gcd,lcm;
    int t=0, i=0;
    cin>>t;
    while(t--) {
        cin>>gcd>>lcm;
        if(lcm%gcd!=0) {
            printf("%d\n", -1);
        }
        else
            printf("%d %d\n", gcd, lcm);
    }
}
