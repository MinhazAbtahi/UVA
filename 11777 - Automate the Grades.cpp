#include <iostream>

using namespace std;

int main()
{
    int T,cs,t1,t2,f,at,ct1,ct2,ct3,ct,total;
    cs=ct=total=0;
    cin>>T;
    while(T--) {
        cin>>t1>>t2>>f>>at>>ct1>>ct2>>ct3;
        if(ct1>=ct3 && ct2>=ct3)
            ct=(ct1+ct2)/2;
        else if(ct1>=ct2 && ct3>=ct2)
            ct=(ct1+ct3)/2;
        else if(ct2>=ct1 && ct3>=ct1)
            ct=(ct2+ct3)/2;
        total=t1+t2+f+at+ct;
        if(total>=90) cout<<"Case "<<++cs<<": "<<"A"<<endl;
        else if(total>=80 && total<90) cout<<"Case "<<++cs<<": "<<"B"<<endl;
        else if(total>=70 && total<80) cout<<"Case "<<++cs<<": "<<"C"<<endl;
        else if(total>=60 && total<70) cout<<"Case "<<++cs<<": "<<"D"<<endl;
        else if(total<60) cout<<"Case "<<++cs<<": "<<"F"<<endl;
    }
}
