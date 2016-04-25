#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char s[1001];
    int n,m,i,cs=0;
    cin>>n;
    while(n--){
        int b=0,w=0,t=0,a=0;
        cin>>m;
        scanf("%s",s);
        for(i=0;i<m;i++){
            if(s[i]=='B')b++;
            else if(s[i]=='W')w++;
            else if(s[i]=='T')t++;
            else if(s[i]=='A')a++;
        }

        if(b+a==m&&b!=0) printf("Case %d: BANGLAWASH\n",++cs);
        else if(w+a==m&&w!=0) printf("Case %d: WHITEWASH\n",++cs);
        else if(a==m) printf("Case %d: ABANDONED\n",++cs);
        else if(b>w) printf("Case %d: BANGLADESH %d - %d\n",++cs,b,w);
        else if(w>b) printf("Case %d: WWW %d - %d\n",++cs,w,b);
        else if(b==w) printf("Case %d: DRAW %d %d\n",++cs,b,t);
    }
    return 0;
}
