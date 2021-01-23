#include<stdio.h>
int main()
{
    int n,i,c_0=0,c_1=0;
    scanf("%d%*c",&n);
    char a[n];
    gets(a);
    for(i=0 ; a[i]!=0 ; i++)
    {
        if(a[i]=='0')
        {
            c_0++;
        }
        else
        {
            c_1++;
        }
    }
    if(c_0<c_1)
        n=n-(2*c_0);
    else
        n=n-(2*c_1);

    printf("%d",n);

}
