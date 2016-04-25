#include <stdio.h>

int main()
{
    int n,temp;
    scanf("%d",&n);
    while(n){
        int size,i,t,x,coun;

        scanf("%d",&size);
        int array[size];
            for(i=0;i<size;i++)scanf("%d",&array[i]);

        for(x=0,coun=0;x<size-1;x++){
                    for(t=0;t<size-x-1;t++){
                    if(array[t]>array[t+1]){
                        temp=array[t];
                        array[t]=array[t+1];
                        array[t+1]=temp;
                        coun++;
                        }
                }
        }
     printf("Optimal train swapping takes %d swaps.\n",coun);
     n--;
    }

    return 0;
}
