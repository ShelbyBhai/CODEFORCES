#include<stdio.h>
int a[100],b[100];
int khela[100];
int main()
{
    int n,p[2],i,c=0;
    scanf("%d",&n);
    scanf("%d",&p[0]);
    for(i=0; i<p[0]; i++)
    {
        scanf("%d",&a[i]);
        khela[a[i]]++;
    }
    scanf("%d",&p[1]);
    for(i=0; i<p[1]; i++)
    {
        scanf("%d",&b[i]);
        khela[b[i]]++;
    }
    for(i=0; i<100; i++)
    {
        if(khela[i]!=0)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("I become the guy");
    }
    else
    {
        printf("Oh, my keyboard");
    }
}
