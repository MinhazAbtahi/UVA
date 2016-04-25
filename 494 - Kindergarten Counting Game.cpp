#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int i,l,count;
    char ch[10000];
    while(gets(ch)) {
        i=0,count=0;
        l=strlen(ch);
        while(i<l) {
            while(!isalpha(ch[i])) i++;
            while(isalpha(ch[i])) i++;
            if(i<=l) count++;
        }
        cout<<count<<endl;
    }
}
