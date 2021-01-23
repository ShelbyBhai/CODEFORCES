#include<stdio.h>
int main()
{
       int x,i;
       int count=0;
       scanf("%d",&x);
       for(i=5;i>0;i--)
       {
              count=count+(x/i);
              x=(x%i);
       }
       printf("%d",count);
}
