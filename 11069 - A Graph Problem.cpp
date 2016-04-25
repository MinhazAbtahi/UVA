#include <cstdio>

int main()
{
    int node[77];
    node[1]=1;
    node[2]=2;
    node[3]=2;

    for(int i=4;i<=77;i++){
        node[i]=node[i-2]+node[i-3];
    }

    int n;
    while(scanf("%d", &n)==1){
        printf("%d\n", node[n]);
    }
}
