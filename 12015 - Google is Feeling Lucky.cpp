#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, cases=0;
    cin>>t;
    while(t--){
        vector<string> webs;
        vector<int> relevances;
        int max=0;

        for(int i=0;i<10;i++){
            string web="";
            int num;
            cin>>web>>num;
            webs.push_back(web);
            relevances.push_back(num);

            if(num>max){
                max=num;
            }
        }
        cout<<"Case #"<<++cases<<":"<<endl;
        for(int i=0;i<relevances.size();i++){
            if(relevances[i]==max)
                cout<<webs[i]<<endl;
        }
    }
}
