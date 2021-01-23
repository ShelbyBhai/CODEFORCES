#include<stdio.h>
#include<stdlib.h>
long long int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,i,j;
    long long int c=0,temp;
    scanf("%d",&n);
    long long int a[n],b[n];
    for(i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
        c=c+a[i];
    }
    for(i=0; i<n; i++)
    {
        scanf("%I64d",&b[i]);
    }
    qsort(b,n,sizeof(long long int),cmpfunc);
    if((c-b[n-1])<=b[n-2])
       printf("YES");
    else
       printf("NO");
}
