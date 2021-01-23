#include<stdio.h>
int main()
{
    int n,i,count=1;
    scanf("%d",&n);
    int a[n-1];
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n-1; i++)
    {
        if(a[i]!=a[i-1])
        {
            count++;
        }
    }
    printf("%d",count);
}
