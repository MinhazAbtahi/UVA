#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int i,l;
    char ch[1000];
    while(gets(ch)) {
        l=strlen(ch);
        for(i=0;i<l;i++) {
            cout<<(char)(ch[i]-7);
        }
        cout<<endl;
    }
}
