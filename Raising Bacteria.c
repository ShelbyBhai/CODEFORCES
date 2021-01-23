#include<stdio.h>
int main()
{
      long long int x,t=2,i,result;
      scanf("%I64d",&x);
      for(i=0;i<x;i++)
      {
              t=t*2;
              if(t>x)
              {
                  t=t/2;
                  break;
              }
      }
      result=1+(x-t);
      printf("%I64d",result);

}
