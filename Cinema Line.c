#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==25)
            c1++;
        else if(a[i]==50 && c1==0)
            break;
        else if(a[i]==50 && c1>0)
        {
            c1--;
            c2++;
        }
        else
        {
            if(a[i]==100 && c1>0 && c2>0)
            {
                c1--;
                c2--;
            }
            else if(a[i]==100 && c2==0 && c1>=3)
                c1=c1-3;
            else
                break;
        }

    }
    if(i==n)
        printf("YES");
    else
        printf("NO");

}
