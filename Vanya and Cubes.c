#include<stdio.h>
int main()
{
       int n,i,sum=0;
       scanf("%d",&n);
       for(i=1;sum<=n;i++)
       {
              sum=sum+((i*(i+1))/2);
       }
       printf("%d",(i-2));
}
