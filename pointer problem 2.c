#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
       char str[100],*p,*p1,*p2,str1[]="lalfita",str2[100];
       puts("enter the string:");
       gets(str);
       p=str;
       while(*p)
       {
              *p=toupper(*p); /* *p++=toupper(*p) can be written as ++ follows *p)*/
              *p++;
       }
       puts(str);/*printf("%s",str) can also be used*/
       p=str;
       while(*p)
       {
              *p=tolower(*p);
              *p++;
       }
       puts(str);
       p1=str1+strlen(str1)-1;
       p2=str2;
       while(p1>=str1)
       {
              *p2=*p1;
              p2++;
              p1--;
       }
       *p2='\0';
       puts(str1);
       puts(str2);




}

