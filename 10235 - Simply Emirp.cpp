#include <iostream>
#include <cmath>

using namespace std;

int isPrime(long int n)
{
    int count=0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int reverse(long int m)
{
    int rev=0;
    while(m!=0) {
        rev=rev*10+m%10;
        m=m/10;
    }
    return rev;
}

int main()
{
    long int n,n1;;
    while(cin>>n){
        if (isPrime(n)!=1)
            cout<<n<<" is not prime."<<endl;
        else {
            int n1=reverse(n);
            if(isPrime(n1)==1 && n1!=n )
                cout<<n<<" is emirp."<<endl;

            else
                cout<<n<<" is prime."<<endl;
        }
    }
}
