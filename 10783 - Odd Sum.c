#include<stdio.h>

int main ()
{
    int n,a,b,c,i,s;
    scanf("%d",&c);
    for(i=1;i<=c;i++){
    scanf("%d%d",&a,&b);
    for(n=a,s=0;n<=b;n++){
        if(n%2==0)
            continue;
        else
            s=s+n;

        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
