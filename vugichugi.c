#include<stdio.h>
#include<math.h>
int main()
{
   int k,sum=0,sum1=0,sum_final=0;
   for(k=0;k<4;k++)
   {
      sum1=sum1+k;
      if(pow(2,k)<k)
      {
           sum=sum+pow(2,k);
      }
      sum_final=sum1-(2*sum);
   }
   printf("%d",sum_final);

}
