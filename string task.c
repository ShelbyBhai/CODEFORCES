#include<stdio.h>
int main()
{
       int i;
       char str[100];
       gets(str);
       for(i=0;str[i]!=0;i++)
       {
              if(str[i]!='A' && str[i]!='E' && str[i]!='I'&& str[i]!='O' && str[i]!='U' && str[i]!='Y')
              {
                     if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y')
                     {
                           if(str[i]>=65 && str[i]<=90)
                           {
                                  str[i]=str[i]+32;
                           }
                           printf(".");
                           printf("%c",str[i]);
                     }
              }
       }
}
