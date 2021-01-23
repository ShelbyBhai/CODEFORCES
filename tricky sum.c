#include<stdio.h>
#include<math.h>

int main()
{
    long long t,i,j,power=0;
    scanf("%I64d",&t);
    long long sum=0,a[t],sum1=0;

    for(i=0;i<t;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        sum1=a[i]*(a[i]+1)/2;
        for(j=0;;j++)
        {
            power=pow(2,j);
            if(power>a[i]) break;
            sum=sum+power;

        }
        printf("%I64d\n",sum1-2*sum);
        sum=0;
        sum1=0;
    }
    return 0;
}
