#include<stdio.h>
#include<string.h>
int main()
{
    int i,result;
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    for(i=0; str1[i]!=0; i++)
    {
        if(str1[i]>=65 && str1[i]<=90)
        {
            str1[i]=str1[i]+32;
        }
    }
    for(i=0; str2[i]!=0; i++)
    {
        if(str2[i]>=65 && str2[i]<=90)
        {
            str2[i]=str2[i]+32;
        }
    }
    result=strcmp(str1,str2);
    printf("%d",result);
}
