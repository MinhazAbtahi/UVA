#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
    We know that log(a*b) = log a + log b, so log n! = log 1 + log 2 + ... + log n.
    Further more, we can get how many digits a number has by taking logarithm operation with a base of 10.
    Also, there's a recursive function that N! = (N-1)! * N.
**/

/// Another Approach
/**
    The number of digits in a number X = CEILING[log(X)] and N! =(N * N-1 * N-2 ... * 1)
    Thus, the number of digits in N! = CEILING[log(N!)]
**/

/// No Need of these Functions
/*
int factorial(int n)
{
    if(n!=1)
        return n*factorial(n-1);
}

int digitCount(int n)
{
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}
*/

int DP[10000001] = {0};

int main() {
	int t, n, i;
	double last = 0;

	for(i = 1; i <= 10000000; i++) {
		last += log10(i);
		DP[i] = (int)last;
	}

	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		printf("%d\n", DP[n]+1);
	}
    return 0;
}
