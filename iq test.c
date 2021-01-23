#include<stdio.h>
int main()
{
       long long int n,i,j,k,c_o=0,c_e=0;
       scanf("%I64d",&n);
       long long int a[n];
       for(i=1;i<=n;i++)
       {
              scanf("%I64d",&a[i]);
       }
       for(i=1;i<=n;i++)
       {
              if(a[i]%2==0)
              {
                     c_e++;
                     j=i;
              }
              else
              {
                     c_o++;
                     k=i;
              }
       }
       if(c_e>c_o)
       {
              printf("%I64d",k);
       }
       else
       {
              printf("%I64d",j);
       }


}
