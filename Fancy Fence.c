#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(360%(180-a[i])!=0)
        {
            printf("NO");
            printf("\n");
        }
        else
        {
            printf("YES");
            printf("\n");
        }
    }
}
