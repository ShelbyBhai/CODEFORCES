#include<stdio.h>
int main()
{
    int n,m,sum;
    scanf("%d %d",&n,&m);
    sum=n;
    while(n>=m)
    {
           sum=sum+(n/m);
           n=(n/m)+(n%m);
    }
    printf("%d",sum);
}

/*#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int s=n,q=0;
    while(n>=m)
    {
        s=s+n/m;
        n=n/m+n%m;
    }
    printf("%d",s);
}*/
