#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d%*c",&n);
    char s[n];
    int a[n];
    gets(s);
    for(i=0,j=0; s[i]!='\0'; i++)
    {
        if(s[i]=='1')
            c++;
        if(s[i]=='0')
        {
            a[j]=c;
            c=0;
            j++;
        }
    }
    a[j]=c;
    for(i=0; i<=j; i++)
    {
        printf("%d",a[i]);
    }
}
