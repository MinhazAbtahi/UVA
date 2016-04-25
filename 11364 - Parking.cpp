#include <iostream>
#include <cstdio>

using namespace std;

/*
    (maximum-minimum)*2
*/

int main()
{
    int t, shops, position, minimum, maximum;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &shops);
        maximum = 0;
        minimum = 1000000;

        for(int i=0;i<shops;i++){
            scanf("%d", &position);

            if(position>maximum)
                maximum=position;
            if(position<minimum)
                minimum=position;
        }

        printf("%d\n", (maximum-minimum)*2);
    }
}
