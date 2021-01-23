#include<stdio.h>
int main()
{
    char p[500],q[500];
    int i;
    gets(p);
    gets(q);
    for(i=0; p[i]!=0; i++)
    {
        if(p[i]==q[i])
            printf("0");
        else
            printf("1");
    }

}
