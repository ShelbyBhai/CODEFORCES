#include<stdio.h>
int main()
{
       int n,i,j;
       scanf("%d",&n);
       int a[n][n];
       for(i=0;i<1;i++)
       {
              for(j=0;j<n;j++)
              {
                    a[i][j]=1;
              }
       }
       for(i=1;i<n;i++)
       {
              for(j=0;j<1;j++)
              {
                     a[i][j]=1;
              }
       }
       for(i=1;i<n;i++)
       {
              for(j=1;j<n;j++)
              {
                     a[i][j]=a[i][j-1]+a[i-1][j];
              }
       }
       printf("%d",a[n-1][n-1]);

}
