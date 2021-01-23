#include<stdio.h>
int main()
{
       int n,i,j,count=0;
       scanf("%d",&n);
       int h[n-1],a[n-1];
       for(i=0;i<=(n-1);i++)
       {
              scanf("%d %d",&h[i],&a[i]);
       }
       for(i=0;i<=(n-1);i++)
       {
              for(j=0;j<=(n-1);j++)
              {
                     if(h[i]==a[j])
                     {
                            count++;
                     }
              }
       }
       printf("%d",count);
}
