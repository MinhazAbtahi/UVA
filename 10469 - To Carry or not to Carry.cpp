#include <iostream>
#include <cstdio>

using namespace std;

/**
    solved with bitwie xclusive-or/XOR(^) operator
    0^0 = 0
    1^0 = 1
    0^1 = 1
    1^1 = 0
**/

int main()
{
    unsigned int a,b;
    while(scanf("%d %d", &a,&b)==2){
        printf("%d\n", a^b);
    }
    return 0;
}
