#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t,n,k,p,cases=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n,&k,&p);
        while(p--){
            k++;
            if(k>n)
                k=1;
        }
        printf("Case %d: %d\n", ++cases, k);
    }
}
