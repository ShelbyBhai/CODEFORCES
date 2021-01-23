#include<stdio.h>
int main()
{    /*using indirect assigning*/
       /*int *p,q;
       p=&q;
       *p=90;
       printf("%d\n",q);
       /*using direct assigning*/
       /*q=100;
       p=&q;
       printf("%d\n",*p);
       /*applying pointer symbols*/
       /*int i=10,*j;
       j=&i;
       printf("%d %d %d %d %d\n",*j,&j,*(&i),j,&i);

      char ch,*cp;
      int inT,*ip;
      float f,*fp;
      double d,*dp;
      cp=&ch;
      ip=&inT;
      fp=&f;
      dp=&d;
      printf("%p %p %p %p\n",cp,ip,fp,dp);
      cp++;
      ip++;
      fp++;
      dp++;
      printf("%p %p %p %p",cp,ip,fp,dp);*/
      char str[]="pointers are not good at all";
      char *p;
      int i;
      p=&str;/*her & is not necessary because str is a pointer himself,but if a different data type is used then & is necessary*/
      for(i=0;p[i]!='\0';i++)
      {
             printf("%c",p[i]);
      }





}
