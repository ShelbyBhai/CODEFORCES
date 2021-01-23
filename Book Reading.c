#include<stdio.h>
int main()
{
    int n,t,i,c1=0,c2=0;
    scanf("%d %d",&n,&t);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        c1=c1+86400-a[i];
        c2++;
        if(c1>=t)
            break;
    }
    printf("%d",c2);
}
