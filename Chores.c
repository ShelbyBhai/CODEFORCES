#include<stdio.h>
int main()
{
    int n,k,x,i;
    scanf("%d %d %d",&n,&k,&x);
    int t=k*x;
    int a[n-1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=((n-1)-k); i>=0; i--)
    {
       t=t+a[i];
    }
    printf("%d",t);
}
