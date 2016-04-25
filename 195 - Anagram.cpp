#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

using namespace std;

bool compare(char a, char b)
{
    if(tolower(a)==tolower(b))
        return a<b;
    return  tolower(a)<tolower(b);
}

int main()
{
    char str[1000];
    int t, len;
    cin>>t;
    while(t--){
        cin.ignore();
        cin>>str;
        len=strlen(str);

        sort(str,str+len,compare);

        do{
            cout<<str<<endl;
        } while(next_permutation(str,str+len,compare));
    }
}
