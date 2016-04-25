#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double n,p,k;
    while(cin>>n>>p) {
        k=pow(p,1/n);
        printf("%.0lf\n",k);
    }
}
