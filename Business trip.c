#include<stdio.h>
int main()
{
    int k,i,j,sum=0,temp;
    scanf("%d",&k);
    int a[12];
    for(i=0; i<12; i++)
    {
        scanf("%d",&a[i]);
    }
    if(k==0)
        printf("0");
    else
    {
        for(i=0; i<12; i++)
        {
            for(j=i+1; j<12; j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0; i<12; i++)
        {
            sum=sum+a[i];
            if(sum>=k)
            {
                printf("%d",i+1);
                break;
            }
        }
        if(i==12)
            printf("-1");
    }
}
