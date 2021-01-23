#include<stdio.h>
int main()
{
    long long int n,x,i,c=0;
    scanf("%I64d %I64d",&n,&x);
    for(i=1; i<=n; i++)
    {
        if(x%i==0 && (x/i)>0)
        {
            //printf("%I64d\n",i);
            c++;
        }
    }
    if(n>=x)
        printf("%I64d",c);
    else
        printf("%I64d",c-(x/n));

}
