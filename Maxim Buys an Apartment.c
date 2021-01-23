#include<stdio.h>
int main()
{
       long long int n,k;
       scanf("%I64d %I64d",&n,&k);
       if(k==0 || n==k)
       {
              printf("0 0");
       }
       else if(3*k<n)
       {
              printf("1 %I64d",2*k);
       }
       else if(2*k>n/2)
       {
              printf("1 %I64d",(n-k));
       }

}
