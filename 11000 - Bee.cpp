#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN = 102;
long long F[MAXN], M[MAXN];

int main()
{
    int N;
    F[0]=1;
    F[1]=1;
    F[2]=2;
    M[0]=0;
    M[1]=1;
    M[2]=2;

    for(int i=3;i<MAXN;i++){
        F[i]=F[i-1]+F[i-2];
        M[i]=M[i-1]+M[i-2]+1;
    }

    while(scanf("%d", &N)==1){
        if(N==-1) break;
        printf("%lld %lld\n", M[N],F[N]+M[N]);
    }
}
