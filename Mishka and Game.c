#include<stdio.h>
int main()
{
    int n,i,c_m=0,c_c=0;
    scanf("%d",&n);
    int m[n],c[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&m[i],&c[i]);
        if(m[i]>c[i])
            c_m++;
        else if(m[i]<c[i])
            c_c++;
    }
    if(c_m>c_c)
        printf("Mishka");
    else if(c_m<c_c)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
}
