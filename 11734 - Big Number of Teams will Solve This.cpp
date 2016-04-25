#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char judge[150],submit[150],judge_no_space[150],submit_no_space[150];
    int test,i,j,k;

    scanf("%d ",&test);
    for(i=0;i<test;i++){
      gets(submit);
      gets(judge);
      if(strcmp(submit,judge)==0)printf("Case %d: Yes\n",i+1);
      else {
          k=0;
        for(j=0;j<strlen(judge);j++){
          if(judge[j]!=' '){
            judge_no_space[k]=judge[j];
             k++;
          }
        }
      judge_no_space[k]='\0';
      k=0;
      for(j=0;j<strlen(submit);j++){
        if(submit[j]!=' '){
         submit_no_space[k]=submit[j];
         k++;
        }

      }
      submit_no_space[k]='\0';
      if(strcmp(judge_no_space,submit_no_space)==0)printf("Case %d: Output Format Error\n",i+1);
      else printf("Case %d: Wrong Answer\n",i+1);

      }


    }


    return 0;
}
