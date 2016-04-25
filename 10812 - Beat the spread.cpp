#include <iostream>
#include <cstdio>
#include <cmath>

/*
    a+b=sum...(1)
    =>a=s-b;

    a-b=diff...(2)
    getting value of a from (1) and putting it in (2)
    s-b-b=diff
    s-diff=2b
    b=(s-diff)/2
*/

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int s,d,a,b;
        scanf("%d %d", &s,&d);

        if(s<d || (s-d)%2!=0) {
            printf("impossible\n");
        }
        else {
            b=(s-d)/2;
            a=s-b;
            printf("%d %d\n", a, b);
        }
    }
}

