#include<stdio.h>
int main()
{
       int x1,x2,x3,result;
       scanf("%d %d %d",&x1,&x2,&x3);
       int max=x1,min=x1;
       if(max<x2)
       {
              max=x2;
       }
       if(max<x3)
       {
              max=x3;
       }
       if(min>x2)
       {
              min=x2;
       }
       if(min>x3)
       {
              min=x3;
       }
       result=(((max+min)/2)-min)+(max-((max+min)/2));
       printf("%d",result);
}
