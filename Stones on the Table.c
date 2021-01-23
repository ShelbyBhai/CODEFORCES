#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    char s[100];
    for(i=0;i<=n;i++)
    {
           scanf("%c",&s[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
    }
        printf("%d",count);

}
