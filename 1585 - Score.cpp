#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[85];
    int score[85];
    unsigned int t, len;

    scanf("%u", &t);

    while(t--)
    {
        scanf("%s", str);
        len = strlen(str);
        int count=0, sum=0;

        for(int i=0; i<len; i++)
        {
            if(str[i]=='O')
            {
                score[i]=1;
            }
            else if(str[i]=='X')
            {
                score[i]=0;
            }
        }

        for(int i=0; i<len; i++)
        {
            if(score[i]==1)
            {
                count++;
            }
            if(score[i]==0)
            {
                count=0;
            }
            sum=sum+count;
        }

        printf("%d\n", sum);
    }
}
