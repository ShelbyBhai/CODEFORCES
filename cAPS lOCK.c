#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int len,i,flag=0;
    gets(str);
    len = strlen(str);
    for(i=1; i<len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        if( str[0] >= 'A' && str[0] <= 'Z' )
        {
            for(i=0; i<len; i++)
            {
                str[i] = str[i] + 'a' - 'A';
            }
            puts(str);
        }
        else
        {
            str[0] = str[0] - 'a' + 'A';
            for(i=1; i<len; i++)
            {
                str[i] = str[i] + 'a' - 'A';
            }
            puts(str);
        }
    }
    else
    {
        puts(str);
    }
}
