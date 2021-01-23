#include<stdio.h>
int main()
{
       int n,i;
       scanf("%d",&n);
       int a[n-1],b[n-1];
       for(i=0;i<n;i++)
       {
              scanf("%d %d",&a[i],&b[i]);
       }
       int max=b[0];
       int adder=b[0];
       for(i=1;i<n;i++)
       {
              adder=adder-a[i]+b[i];
              printf("%d\n",adder);
              if(adder>max)
              {
                     max=adder;
                     adder=b[0];
              }
       }
       printf("%d",max);

}
