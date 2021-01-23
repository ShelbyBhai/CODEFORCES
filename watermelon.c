#include<stdio.h>
int main()
{
       int w,w1,w2;
       scanf("%d",&w);
       w1=(w/2);
       w2=w-w1;
       if(w==2)
       {
              printf("NO");
       }
       else if((w1%2)==0 && (w2%2)==0)
       {
              printf("YES");
       }
       else if((w1%2)!=0 && (w2%2)!=0)
       {
              printf("YES");
       }
       else
              printf("NO");
}
