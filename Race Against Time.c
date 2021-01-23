#include<stdio.h>
int main()
{
       double h,m,s,t1,t2;
       scanf("%f %f %f %f %f",&h,&m,&s,&t1,&t2);
       h=h+(m/60)+(s/3600);
       m=m+(s/60);

}
