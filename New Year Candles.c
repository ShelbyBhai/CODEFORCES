#include<stdio.h>
int main()
{
    int n,m,sum;
    scanf("%d %d",&n,&m);
    sum=n;
    while(n>=m)
    {
           sum=sum+(n/m);
           n=n/m+n%m;
    }
    printf("%d",sum);
}
