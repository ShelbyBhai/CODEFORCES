#include<stdio.h>
int main()
{
    char str[100],*p;
    int i;
    puts("enter the string:");
    gets(str);
    p=str;
    while(*p && *p!=' ')
       p++;
    printf(p);

}

