#include<stdio.h>
int main()
{
       int x[200],y[200],z[200];
       int n,i,sum_x=0,sum_y=0,sum_z=0;
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
              scanf("%d %d %d",&x[i],&y[i],&z[i]);
              sum_x=sum_x+x[i];
              sum_y=sum_y+y[i];
              sum_z=sum_z+z[i];
       }
       if(sum_x==0 && sum_y==0 && sum_z==0)
       {
              printf("YES");
       }
       else
              printf("NO");
}
