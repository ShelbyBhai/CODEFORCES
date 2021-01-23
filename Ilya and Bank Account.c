#include<stdio.h>
int main()
{
       long long int n,temp1,max,temp2,div;
       scanf("%I64d",&n);
       if(n>=-9)
              printf("%I64d",n);
       else if(n>=-99 && n<-9)
       {
              temp1=n/10;
              temp2=n%10;
              max=((temp1>temp2)?temp1:temp2);
              printf("%I64d",max);
       }
       else
       {
             temp1=(-1)*(n%10);
             temp2=(-1)*((n/10)%10);
             if(temp1>temp2)
             {
                    printf("%I64d",(n/10));
             }
             else
             {
                    div=n/100;
                    printf("%I64d%I64d",div,temp1);
             }
       }

}
