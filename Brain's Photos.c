#include<stdio.h>
int main()
{
       int n,m,i,j;
       scanf("%d %d",&n,&m);
       char a[n][m];
       for(i=0;i<m;i++)
       {
              for(j=0;j<n;j++)
              {
                     scanf("%c%*c",&a[i][j]);
              }
       }

}
