#include<stdio.h>
int main()
{
    int i,j,c_i,c_j;
    int a[5][5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                c_i=i-2;
                c_j=j-2;
                if(c_i<0)
                {
                    c_i=c_i*-1;
                }
                if(c_j<0)
                {
                    c_j=c_j*-1;
                }
            }
        }
    }
    printf("%d",c_i+c_j);
}

