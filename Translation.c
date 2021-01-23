#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],t[1000];
    int i,j;
    gets(s);
    gets(t);
    if(strlen(s)!=strlen(t))
    {
        printf("NO");
    }
    else
    {
        for(i=0,j=strlen(t)-1; i<=strlen(s),j>=0; i++,j--)
        {
            if(s[i]!=t[j])
            {
                break;
            }
            else
            {
                continue;
            }

        }
    if((s[i]!=0 && t[j]!=0))
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    }

}
