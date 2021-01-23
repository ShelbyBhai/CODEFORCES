#include<stdio.h>
int a[4];
int main()
{
    int y,i=0,j,temp,flag=0;
    scanf("%d",&y);
    while(flag!=1)
    {
        temp=y;
        while(temp!=0 && i<=3)
        {
            a[i++]=temp%10;
            temp=temp/10;
        }
        for(i=3; i>=0; i--)
        {
            for(j=i+1; j>=0; j--)
            {
                if(a[i]==a[j])
                   {
                    y++;
                    break;
                   }
            }
        }
        if(i==0)
        {
            flag=1;
            printf("%d",temp);
        }
        else continue;
    }
}


