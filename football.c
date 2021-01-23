#include<stdio.h>
#include<string.h>
int main()
{
    int i,c0=0,c1=0;
    char str[100];
    gets(str);
    if(strlen(str)>=7)
    {
        for(i=0; str[i]!=0; i++)
        {
            if(str[i]=='0')
            {
                c0++;
                if(c0==7)
                {
                    printf("YES");
                    break;
                }
                if(str[i+1]=='1')
                {
                    c0=0;
                }
            }
            else if(str[i]=='1')
            {
                c1++;
                if(c1==7)
                {
                    printf("YES");
                    break;
                }
                if(str[i+1]=='0')
                {
                    c1=0;
                }
            }
        }
    }
    if(c0<7 && c1<7)
    {
           printf("NO");
    }
}
