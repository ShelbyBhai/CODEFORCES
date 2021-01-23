#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,m,sizeof(int),cmpfunc);
    printf("%d",(a[n-1]-a[0]));
}
