#include <cstdio>
#include <cctype>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str)) {
        if (str=="DONE")
            break;

        string strN="";
        string strR;
        int len;
        len=str.size();

        for(int i=0;i<len;i++){
            if(isalpha(str[i]))
                strN+=tolower(str[i]);
        }

        strR=strN;
        reverse(strR.begin(),strR.end());

        if(strN==strR)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
}
