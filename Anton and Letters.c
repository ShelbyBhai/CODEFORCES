#include<stdio.h>
char str[2005];
int a[27];
int main()
{
    int i,c=0;
    gets(str);
    for(i=1; str[i]!='\0'; i=i+3)
    {
        a[str[i]-'a']++;
    }
    for(i=0; i<27; i++)
    {
        if(a[i]!=0)
              c++;
    }
    printf("%d",c);
}
