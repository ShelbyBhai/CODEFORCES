#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a1[n-1],a2[n-1],a3[n-1];
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&a1[i],&a2[i],&a3[i]);
        if((a1[i]+a2[i]+a3[i])>=2)
        {
            c++;
        }
    }
    printf("%d",c);


}
