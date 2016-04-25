#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t,l,sqr,count;
    char str[10010],ch[105][105];
    cin>>t;
    getchar();
    while(t--) {
        gets(str);
        l=strlen(str);
        sqr=sqrt(l);
        count=0;
        if(sqr*sqr==l) {
            for(int i=0;i<sqr;i++) {
                for(int j=0;j<sqr;j++) {
                    ch[i][j]=str[count++];
                }
            }
            for(int i=0;i<sqr;i++) {
                for(int j=0;j<sqr;j++)
                    cout<<ch[j][i];
            }
            cout<<endl;
        }
        else
            cout<<"INVALID"<<endl;
    }
}
