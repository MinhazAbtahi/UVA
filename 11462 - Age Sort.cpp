#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int ages[2000000];
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            scanf("%d", &ages[i]);
        }
        sort(ages, ages + n);
        for (int i = 0; i < n; i++) {
            printf("%d", ages[i]);
            if(i!=n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
