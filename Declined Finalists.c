#include<stdio.h>
int main()
{
    int k,i,j,max,ans;
    scanf("%d",&k);
    int r[k-1];
    for(i=0; i<k; i++)
    {
        scanf("%d",&r[i]);
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            if(r[i]<r[j])
            {
                max=r[j];
                r[j]=r[i];
                r[i]=max;
            }
            printf("%d ", max);
        }
    }
    /*if(r[k-1]>25)
    {
        ans=r[k-1]-25;
        printf("%d",ans);
    }
    else
       printf("0");*/
}
