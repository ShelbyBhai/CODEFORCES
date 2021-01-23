#include<stdio.h>
int main()
{
       int s,n,i;
       scanf("%d %d",&s,&n);
       int sum=s;
       int x[n-1],y[n-1];
       for(i=0;i<=(n-1);i++)
       {
          scanf("%d %d",&x[i],&y[i]);
       }
       if(n==1 && s<x[0])
       {
              printf("NO");
       }
       else
       {
              for(i=0;i<=(n-1);i++)
              {
                     sum=sum+y[i];
                     if(sum<x[i])
                     {
                            printf("NO");
                     }
              }
              if(i>=(n-1))
                     printf("YES");
       }
}
