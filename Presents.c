#include<stdio.h>
int main()
{
       int n,i;
       scanf("%d",&n);
       int p[n],q[n];
       for(i=1;i<=n;i++)
       {
              scanf("%d",&p[i]);
       }
       for(i=1;i<=n;i++)
       {
              q[p[i]]=i;
       }
       for(i=1;i<=n;i++)
       {
              printf("%d ",q[i]);
       }
}
