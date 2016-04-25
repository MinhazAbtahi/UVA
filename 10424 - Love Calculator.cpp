#include <iostream>
#include <cstdio>
#include <cstring>
//#include <iomanip>

using namespace std;

int addDigit(int n)
{
    if(n<10) return n;
    int sum=0;
    while(n!=0) {
        sum+=n%10;
        n=n/10;
    }
    return addDigit(sum);
}

int main()
{
    char n1[30],n2[30];
    int len1,len2,num1,num2,d1,d2;
    float result;
    while(gets(n1) && gets(n2)) {
        len1=strlen(n1);
        len2=strlen(n2);

        num1=0;
        for(int i=0;i<len1;i++) {
            if(n1[i]>='a' && n1[i]<='z') {
                num1+=(n1[i]-96);
            }
            else if(n1[i]>='A' && n1[i]<='Z') {
                num1+=(n1[i]-64);
            }
        }
        num2=0;
        for(int j=0;j<len2;j++) {
            if(n2[j]>='a' && n2[j]<='z') {
                num2+=(n2[j]-96);
            }
            else if(n2[j]>='A' && n2[j]<='Z') {
                num2+=(n2[j]-64);
            }
        }
        d1=addDigit(num1);
        d2=addDigit(num2);
        if(d1<d2)
            result=((float)d1/(float)d2)*100.0;
        else
            result=((float)d2/(float)d1)*100.0;

        //cout<<fixed<<setprecision(2)<<result<<"%"<<endl;
        printf("%.2f %c\n", result,'%');
    }
}
