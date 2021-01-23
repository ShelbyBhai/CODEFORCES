#include<stdio.h>
int main()
{
       int s,v1,v2,t1,t2,score1,score2;
       scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
       score1=(s*v1)+(2*t1);
       score2=(s*v2)+(2*t2);
       if(score1<score2)
       {
              printf("First");
       }
       else if(score2<score1)
       {
              printf("Second");
       }
       else
              printf("Friendship");
}
