#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n[1000],t1,t2,count;
    float sum,avg,result;
    cin>>t1;
    for(int i=0;i<t1;i++) {
        result=0;
        sum=0;
        avg=0;
        count=0;
        cin>>t2;
        for(int i=0;i<t2;i++) {
                cin>>n[i];
                sum+=n[i];
        }
        avg=sum/t2;
        for(int i=0;i<t2;i++) {
            if(n[i]>avg)
                count++;
            }
            result=(count*100)/(float)t2;
            cout<<fixed<<setprecision(3)<<result<<"%"<<endl;
    }
}
