#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    int a[n];
    if(n>4)
    {
        if(n%2==0)
        {
            for(i=1,k=1; k<=(n/2),i<n; i=i+2,k++)
            {
                a[k]=i;
            }
            for(j=2,k=(n/2)+1; k<=n,j<=n; j=j+2,k++)
            {
                a[k]=j;
            }
            printf("%d\n",n);
            for(i=1; i<=n; i++)
            {
                printf("%d ",a[i]);
            }
        }
        else
        {
            for(i=1,k=1; k<=(n/2)+1,i<=n; i=i+2,k++)
            {
                a[k]=i;
            }
            for(j=2,k=(n/2)+2; k<=n,j<n; j=j+2,k++)
            {
                a[k]=j;
            }
            printf("%d\n",n);
            for(i=1; i<=n; i++)
            {
                printf("%d ",a[i]);
            }
        }
    }
    else if(n==2 || n==1)
    {
        printf("1\n");
        printf("1");
    }
    else if(n==3)
    {
        printf("2\n");
        printf("1 3");
    }
    else if(n==4)
    {
        printf("4\n");
        printf("2 4 1 3");
    }


}
