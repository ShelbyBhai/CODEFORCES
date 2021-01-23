#include<stdio.h>
int main()
{
       char s[100];
       gets(s);
       int i,count_A=0,count_a=0;
       for(i=0;s[i]!=0;i++)
       {
              if(s[i]>='A' && s[i]<='Z')
                     count_A++;
              else
                     count_a++;
       }
       if(count_a>=count_A)
       {
              for(i=0;s[i]!=0;i++)
              {
                     if(s[i]>='A' && s[i]<='Z')
                            s[i]=s[i]+32;
                            printf("%c",s[i]);
              }
       }
       else
       {
              for(i=0;s[i]!=0;i++)
              {
                     if(s[i]>='a' && s[i]<='z')
                            s[i]=s[i]-32;
                            printf("%c",s[i]);
              }
       }

}
