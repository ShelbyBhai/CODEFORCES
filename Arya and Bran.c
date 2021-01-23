#include<stdio.h>
int main()
{
    int i,n,k,store,sum=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(k>8 && sum==k)
       printf("%d",n);
    else if(k>8 && sum>k)
    {
        if(k%8!=0)
        {
            if(((k/8)+1)>n)
                printf("-1");
            else
                printf("%d",((k/8)+1));
        }
        else
            printf("%d",k/8);
    }
    else if(sum<k)
        printf("-1");
    else if(k<8 && sum>=k)
    {
        for(i=1,store=0; i<=n; i++)
        {
            if(a[i]>8)
                a[i]=8;
            store=store+a[i];
            if(store>=k)
               {
                  printf("%d",i);
                  break;
               }
        }
    }

}

