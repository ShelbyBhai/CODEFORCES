#include<stdio.h>
int main()
{
       int n,k,i,j,c=0;
       scanf("%d %d",&n,&k);
       int y[n-1];
       for(i=0;i<n;i++)
       {
              scanf("%d",&y[i]);
              if((y[i]+k)<=5)
                  c++;
       }
       printf("%d",c/3);
       /*for(i=0;i<n;i++)
       {
              for(j=i+1;j<n;j++)
              {
                     if(y[i]>y[j])
                     {
                            temp=y[i];
                            y[i]=y[j];
                            y[j]=temp;
                     }
              }
       }*/

}
