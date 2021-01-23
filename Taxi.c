#include<stdio.h>
int main()
{
       int n,c1=0,c2=0,c3=0,c4=0,i;
       scanf("%d",&n);
       int s[n-1];
       for(i=0;i<=(n-1);i++)
       {
              scanf("%d",&s[i]);
              if(s[i]==4)c4++;
              else if(s[i]==3)c3++;
              else if(s[i]==2)c2++;
              else c1++;
       }
       printf("%d %d %d %d",c1,c2,c3,c4);
}
