#include<stdio.h>
int main()
{
       long long int a,b,result=1,i;
       scanf("%I64d %I64d",&a,&b);
       if(a==0)
              a=1;
       for(i=b;i>=(a+1);i--)
       {
              result=result*i;
       }
       result=result%10;
       printf("%I64d",result);
}
