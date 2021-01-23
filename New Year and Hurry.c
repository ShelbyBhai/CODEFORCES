#include<stdio.h>
int main()
{
    int n,k,i,range;
    scanf("%d %d",&n,&k);
    range=(240-k);
    for(i=1; i<=n; i++)
    {
        range=range-(5*i);
        if(range<0)
        {
            i=i-1;
            break;
        }
        if(i==n)
        {
               break;
        }

    }

    printf("%d",i);
}
