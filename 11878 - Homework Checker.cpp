#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
    int a,b,result,count=0;
    char ch;
    char c[100];
    while(scanf("%d%c%d=%s",&a,&ch,&b,c)==4)
    {
        if(ch=='+')
        {
            result=a+b;
            if(result==atoi(c))
            count++;
        }
        else if(ch=='-')
        {
            result=a-b;
            if(result==atoi(c))
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
