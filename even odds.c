#include <stdio.h>

int main ()
{
    long long int k, n, temp;
    scanf("%I64d %I64d", &n, &k);
    if(n%2!=0)
    {
        if(k<=(n/2)+1)
            temp = 2*k-1;
        else
            temp = 2*(k-(n/2))-2;
    }
    else
    {
        if(k<=(n/2))
                temp = 2*k-1;
                else
                    temp =  2*(k-(n/2));
        }
printf("%I64d", temp);
}
