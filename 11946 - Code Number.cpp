#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char s[1000];
    int t,i,j,l;
    cin>>t;
    getchar();
    for(j=0;j<t;j++)
    {
        while(gets(s)!='\0') {
            l=strlen(s);
            if(l==0){break;}

        for(i=0;i<l;i++) {
           if(s[i]=='4') cout<<"A";
           else if(s[i]=='8')cout<<"B";
           else if(s[i]=='3')cout<<"E";
           else if(s[i]=='6')cout<<"G";
           else if(s[i]=='1')cout<<"I";
           else if(s[i]=='0')cout<<"O";
           else if(s[i]=='9')cout<<"P";
           else if(s[i]=='5')cout<<"S";
           else if(s[i]=='7')cout<<"T";
           else if(s[i]=='2')cout<<"Z";
           else cout<<s[i];
          }
          cout<<endl;
        }
        //cout<<j<<endl<<t;
        if(j!=t-1) cout<<endl;
    }
    return 0;
}
