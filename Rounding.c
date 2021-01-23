#include<stdio.h>
int main()
{
    long long int n,tempn;
    scanf("%I64d",&n);
    tempn=n%10;
    if(tempn>0)
    {
        if(tempn<=5)
        {
            n=n-tempn;
        }
        else
        {
            n=n+10-tempn;
        }
    }
    printf("%I64d",n);
}
