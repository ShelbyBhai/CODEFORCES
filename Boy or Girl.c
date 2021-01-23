#include<stdio.h>
char str[101];
int a[26];
int main()
{
    int i,c=0;
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        a[str[i]-'a']++;
    }
    for(i=0; i<26; i++)
    {
        if(a[i]!=0)
        {
            c++;
        }
    }
    if(c%2==0)
    {
           printf("CHAT WITH HER!");
    }
    else
    {
           printf("IGNORE HIM!");
    }
}
