#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int arr1[100];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int count=0;
    for(i=0; i<n; i++)
    {
        if(arr1[i]!=0)
        {
            if(arr1[i]>=arr1[k-1])
            {
                count++;
            }
        }
    }
    printf("%d",count);

}
