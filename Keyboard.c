#include<stdio.h>
int main()
{
       char str[31]={'q','w','e','r','t','y','u','i','o','p',
                    'a','s','d','f','g','h','j','k','l',';',
                    'z','x','c','v','b','n','m',',','.','/','\0'};
       char d;
       int i,j;
       scanf("%c%*c",&d);
       char s[100];
       gets(s);
       if(d=='R')
       {
              for(i=0;s[i]!='\0';i++)
              {
                     for(j=0;str[j]!='\0';j++)
                     {
                            if(s[i]==str[j])
                                 {
                                   s[i]=str[j-1];
                                   break;
                                 }
                     }
              }
       }
       if(d!='R')
       {
              for(i=0;s[i]!='\0';i++)
              {
                     for(j=0;str[j]!='\0';j++)
                     {
                            if(s[i]==str[j])
                                  {
                                   s[i]=str[j+1];
                                   break;
                                  }
                     }
              }
       }
       puts(s);
}
