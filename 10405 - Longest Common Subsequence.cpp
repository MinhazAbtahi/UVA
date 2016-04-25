#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str1, str2;
int c[1000][1000];

int LCS_length(int m, int n)
{
    for(int i=1;i<=m;i++){
        c[i][0]=0;
    }
    for(int j=1;j<=n;j++){
        c[0][j]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(str1[i-1]==str2[j-1]){
                c[i][j]=c[i-1][j-1]+1;
            }
            else
                c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
    return c[m][n];
}

int main()
{
    int n1,n2;

    while(getline(cin,str1)){
        getline(cin, str2);

        n1=str1.size();
        n2=str2.size();

        cout<<LCS_length(n1,n2)<<endl;
    }
}

