#include<stdio.h>
int main()
{
    long long int a[4];
    int count=0,i,j;
    for(i=0; i<4; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
           for(j=i+1;j<4;j++)
           {
                  if(a[i]==a[j] && a[i]!=a[i-1])
                     count++;
           }

    }
    printf("%d",count);
}
