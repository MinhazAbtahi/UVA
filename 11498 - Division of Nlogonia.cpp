#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int K,N,M,x,y;
    for(;;){
        scanf("%d", &K);
        if(K==0) break;
        scanf("%d%d", &N,&M);
        while(K--){
            scanf("%d%d", &x,&y);
            if(x==N || y==M)
                printf("divisa\n");
            else if(x>N && y>M)
                printf("NE\n");
            else if(x>N && y<M)
                printf("SE\n");
            else if(x<N && y>M)
                printf("NO\n");
            else
                printf("SO\n");
        }
    }
}
