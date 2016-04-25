#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    char ch[1000];
    int l,count,sum,n;
    while(gets(ch)) {
        l=strlen(ch);
        sum=0;
        for(int i=0;i<l;i++) {
            if(ch[i]>='a' && ch[i]<='z') {
                sum+=(toascii(ch[i])-96);
            }
            else
                sum+=(toascii(ch[i])-38);
        }
        count=0;
        for(int i=2;i<=sqrt(sum);i++) {
            if(sum%i==0)
                count++;
        }
        if(count==0)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
}
