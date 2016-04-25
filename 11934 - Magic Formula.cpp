#include <cstdio>

int main()
{
    int a,b,c,d,l;

    scanf("%d %d %d %d %d", &a,&b,&c,&d,&l);
    while(a || b || c || d || l){
        int counter=0;

        for(int i=0;i<=l;++i){
            if((a*i*i+b*i+c)%d==0){
                counter++;
            }
        }
        printf("%d\n", counter);

        scanf("%d %d %d %d %d", &a,&b,&c,&d,&l);
    }
}
