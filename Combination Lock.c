#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d%*c",&n);
    char str1[n],str2[n];
    gets(str1);
    gets(str2);
    for(i=0; str1[i]!=0; i++)
    {
        if(str1[i]>=str2[i])
        {
            if(str1[i]-str2[i]>5)
            {
                c=c+(10-(str1[i]-str2[i]));
            }
            else
            {
                c=c+(str1[i]-str2[i]);
            }
        }
        else
        {
               if(str2[i]-str1[i]>5)
               {
                      c=c+(10-(str2[i]-str1[i]));
               }
               else
               {
                      c=c+(str2[i]-str1[i]);
               }
        }
    }
    printf("%d",c);
}
