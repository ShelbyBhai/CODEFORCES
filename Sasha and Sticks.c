#include<stdio.h>
int main()
{
       long long int n,k,chckr;
       scanf("%I64d %I64d",&n,&k);
       chckr=(n/k);
       if((chckr%2)==0)
       {
              printf("NO");
       }
       else
       {
              printf("YES");
       }
}
