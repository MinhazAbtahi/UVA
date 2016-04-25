#include <iostream>
#include <string>

using namespace std;

class person {
public:
    int t,dd,mm,yyyy,age;
    string name;
    person () {}
    person (string name, int dd, int mmm, int yyyy) {
        this->name = name;
        this->dd = dd;
        this->mm = mm;
        this->yyyy = yyyy;
        age = 10000*yyyy+100*mm+dd;
    }
};

int main()
{
    int t;
    while(cin>>t) {
        person youngest("",0,0,0);
        person oldest("",31,12,1999);
        person input;
        for(int i=0;i<t;i++) {
            cin>>input.name>>input.dd>>input.mm>>input.yyyy;
            if ( input.yyyy > youngest.yyyy )
                youngest = input;
            else if ( input.yyyy == youngest.yyyy && input.mm > youngest.mm )
                youngest = input;
            else if ( input.yyyy == youngest.yyyy && input.mm == youngest.mm && input.dd > youngest.dd )
                youngest = input;

            if ( input.yyyy < oldest.yyyy )
                oldest = input;
            else if ( input.yyyy == oldest.yyyy && input.mm < oldest.mm )
                oldest = input;
            else if ( input.yyyy == oldest.yyyy && input.mm == oldest.mm && input.dd < oldest.dd )
                oldest = input;
        }
        cout<<youngest.name<<endl;
        cout<<oldest.name<<endl;
    }
}
