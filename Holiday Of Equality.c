#include<stdio.h>
int main()
{
    int n,i,j,temp,c=0;
    scanf("%d",&n);
    int a[n-1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=1; i<n; i++)
    {
        c=c+(a[0]-a[i]);
    }
    printf("%d",c);


}
