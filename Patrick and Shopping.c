#include<stdio.h>
int main()
{
       long long int d1,d2,d3,w1,w2,w3,w4;
       scanf("%I64d %I64d %I64d",&d1,&d2,&d3);
       w1=d1+d2+d3;
       w2=2*d1+2*d2;
       w3=2*d1+2*d3;
       w4=2*d2+2*d3;
       long long int min=w1;
       if(min>w2)
              min=w2;
       if(min>w3)
              min=w3;
       if(min>w4)
              min=w4;
       printf("%I64d",min);
}
