#include<stdio.h>
int main()
{
       int n,i,c_f=0,c_s=0;
       scanf("%d%*c",&n);
       char str[n];
       gets(str);
       for(i=0;str[i]!=0;i++)
       {
              if(str[i]=='S' && str[i+1]=='F')
              {
                     c_f++;
              }
              else if(str[i]=='F' && str[i+1]=='S')
              {
                     c_s++;
              }
       }
       if(c_f>c_s)
       {
              printf("YES");
       }
       else
       {
              printf("NO");
       }
}
