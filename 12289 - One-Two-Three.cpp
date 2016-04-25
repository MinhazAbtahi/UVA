#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[10];
    int n, len;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        len=strlen(str);
        if(len==5) {
            cout<<3<<endl;
        }
        else
        {
            if(str[0]=='o' && str[1]=='n' || str[1]=='n' && str[2]=='e' || str[0]=='o' && str[2]=='e')
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
}
