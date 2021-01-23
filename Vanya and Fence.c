#include<stdio.h>
int main()
{
    int n,h,i,count=0;
    scanf("%d %d",&n,&h);
    int a[n-1];
    for(i=0; i<=(n-1); i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=h)
            count=count+1;
        else
            count=count+2;
    }
    printf("%d",count);

}
