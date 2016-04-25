#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int numbers[3010], n, jolly[3010];

int main() {
    while (scanf("%d", &n) == 1) {

        for (int i=0 ; i<n ; i++) {
            scanf("%d", &numbers[i]);
        }

        for (int i=1 ; i<n ; i++) {
            jolly[i-1] = abs(numbers[i] - numbers[i-1]);
        }

        bool isJolly = true;
        sort(jolly, jolly+n-1);

        for (int i=0 ; i<n-1 ; i++) {
            if (jolly[i] != (i+1)) {
                isJolly = false;
                break;
            }
        }

        printf( isJolly ? "Jolly\n" : "Not jolly\n");

    }
}
