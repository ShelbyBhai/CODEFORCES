#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d%*c",&n);
    char str[n][1000];
    for(i=0; i<n; i++)
    {
        gets(str[i]);
    }
    for(i=0; i<n; i++)
    {
        if(strlen(str[i])>10)
        {
            printf("%c%d%c\n",str[i][0],(strlen(str[i])-2),str[i][strlen(str[i])-1]);
        }
        else
            puts(str[i]);
    }
}
