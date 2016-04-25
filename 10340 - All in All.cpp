#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    while(cin>>s1>>s2) {
        int i,j;
        for(i=0,j=0;i<s2.length();i++) {
            if(s2[i]==s1[j])
                j++;
        }
        if(s1.length()==j)
               cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
    }
}
