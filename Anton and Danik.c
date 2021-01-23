#include<stdio.h>
int main()
{
       int n,i,c_d=0,c_a=0;
       scanf("%d",&n);
       char s[n];
       for(i=0;i<=n;i++)
       {
            scanf("%c",&s[i]);
       }
       for(i=0;s[i]!=0;i++)
       {
              if(s[i]=='D')
              {
                     c_d++;
              }
              else if(s[i]=='A')
              {
                     c_a++;
              }
       }
       if(c_a==c_d)
       {
              printf("Friendship");
       }
       else if(c_a>c_d)
       {
              printf("Anton");
       }
       else
       {
              printf("Danik");
       }
}
