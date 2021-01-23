#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,m,i,c=0;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmpfunc);
    for(i=0; i<m; i++)
    {
        if(a[i]<0)
        {
            a[i]=a[i]*-1;
            c=c+a[i];
        }
    }
    printf("%d",c);
}
