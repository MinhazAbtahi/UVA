#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int t,i;
    float c,d,temp;

    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>c>>d;
        temp=c+(d*(5.00/9.00));
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<temp<<endl;
    }

    return 0;
}
