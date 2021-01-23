#include<stdio.h>
int main()
{
    int n,i,j,x=0;
    scanf("%d",&n);
    char str[n][3];
    for(i=0; i<=n; i++)
    {
        gets(str[i]);
        if(str[i][1]=='+')
            x=x+1;
        else if(str[i][1]=='-')
            x=x-1;
    }
    printf("%d",x);
}
