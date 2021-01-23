#include<stdio.h>
int main()
{
    int a,b,min,result,temp;
    scanf("%d %d",&a,&b);
    if(a!=b)
    {
        if(a<b)
        {
            min=a;
        }
        else
        {
            min=b;
        }

        result=min;
        temp=((a+b)-min-min)/2;
        printf("%d %d",result,temp);
    }
    else
    {
        printf("%d",a);
        printf(" ");
        printf("0");
    }

}
