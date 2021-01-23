#include<stdio.h>
#include<string.h>
int main()
{
    char s[103];
    gets(s);
    char temp;
    int i,j;
    for(i=0; i<strlen(s) ; i=i+2)
    {
        for(j=i+2; j<strlen(s) ; j=j+2)
        {
            if(s[i]>=s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    puts(s);
}
