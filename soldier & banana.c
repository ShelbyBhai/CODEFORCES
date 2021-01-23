#include<stdio.h>
int main()
{
       long long int n,w,k,sum=0,need;
       int i;
       scanf("%I64d %I64d %I64d",&k,&n,&w);
       for(i=1;i<=w;i++)
       {
              sum=sum+i;
       }
       need=k*sum;
       if((need-n)<0)
             printf("0");
       else
              printf("%I64d",(need-n));

}
