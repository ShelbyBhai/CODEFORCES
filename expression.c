#include<stdio.h>
int main()
{
    int a,b,c,max1,max2,max3,max,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    max1=a*b*c;
    max2=(sum-c)*c;
    max3=(sum-a)*a;
    if(a==1 && sum<6)
    {
           printf("%d",sum);
    }
    else if(a==1 && c==1)
    {
           printf("%d",sum);
    }
    else
    {
           max=max1;
           if(max1<max2)
           {
                  max=max2;
           }
           if(max1<max3 && max2<max3)
           {
                  max=max3;
           }
           printf("%d",max);
    }
}

