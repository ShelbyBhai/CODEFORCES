#include<stdio.h>
#include<string.h>
char s[1000];
int a[26];
int main()
{
    int i,k,c=0,n;
    gets(s);
    scanf("%d",&k);
    for(i=0; s[i]!='\0'; i++)
    {
        a[s[i]-'a']++;
    }
    for(i=0; i<26; i++)
    {
        if(a[i]!=0)
        {
            c++;
        }
    }
    if(c>=k)
       printf("0");
    else if(strlen(s)>=k)
        printf("%d",k-c);
    else
        printf("impossible");
}
