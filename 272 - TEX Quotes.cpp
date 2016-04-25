#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char ch[100000];
    long i,count=0,len;
    while(gets(ch)) {
        len=strlen(ch);
        for(i=0;i<len;i++) {
            if(ch[i]=='"') {
                count++;
                if(count%2==1){
                    cout<<"``";
                }
                else
                    cout<<"''";
            }
            else
                cout<<ch[i];
        }
        cout<<endl;
    }
}
