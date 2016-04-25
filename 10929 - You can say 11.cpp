#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

/**
    If ABCDEFG is multiple of 11, then A-B+C-D+E-F+G... is also divisible by 11.
    Otherwise ABCDEFG isn't a multiple of 11.

    Another method (similar to long-division on pen and paper) is to read digits one-by-one,
    and apply the modulus; this will work on any arbitrary number, while using primitive types.
    A number N is divisible by 11 if the final digit results in no remainder.
**/

char in[1100];

int main() {
    while(gets(in)) {
        if(in[0] == '0' && in[1] == 0) break;

        int s = 0;
        for(int i = 0; in[i] != 0; i++) {
            s += (in[i] - '0');
            s *= 10;
            s %= 11;
        }
        printf(s == 0? "%s is a multiple of 11.\n" :
            "%s is not a multiple of 11.\n", in);
    }
}
