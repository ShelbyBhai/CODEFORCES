#include<stdio.h>
int main()
{
       int n,i,c=0;
       scanf("%d",&n);
       int a[n];
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
              if(a[i]<0)
                     c++;
              if(a[i]>0 && i!=(n-1))
                     c=c-a[i];

       }
       printf("%d",c);
}
