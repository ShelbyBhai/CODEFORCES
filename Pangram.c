#include<stdio.h>
char str[102];
int a[60];
int main()
{
    int n,i,c=0;
    scanf("%d%*c",&n);
    for(i=0; i<n; i++)
    {
        scanf("%c",&str[i]);
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]-'A'+'a';
        }
        a[str[i]-'a']++;
    }
    for(i=0; i<60; i++)
    {
        if(a[i]!=0)
            c++;
    }
    if(c>=26)
        printf("YES");
    else
        printf("NO");
}
