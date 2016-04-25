#include <iostream>
#include <algorithm>

using namespace std;

int x[1000],y[1000],c[1000][1000];

int LCS_length(int m, int n)
{
    for(int i=0;i<=m;i++){
        c[i][0]=0;
    }
    for(int j=0;j<=n;j++){
        c[0][j]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i]==y[j]){
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
    int n1,n2,cs=0;
    while(cin>>n1>>n2){
        if(n1==0 && n2==0)
            break;

        for(int i=1;i<=n1;i++){
            cin>>x[i];
        }
        for(int j=1;j<=n2;j++){
            cin>>y[j];
        }

        cout<<"Twin Towers #"<<++cs<<endl;
        cout<<"Number of Tiles : "<<LCS_length(n1,n2)<<endl<<endl;
    }
}
