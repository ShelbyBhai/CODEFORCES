#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int c;
    long int c1;
    gets(str);
    c=strlen(str);
    c1=atol(str);
    if(c<=3 && (c1>=-128 && c1<=127))
        printf("byte");
    else if((c>=3 && c<=5) &&(c1>127 && c1<=32767))
        printf("short");
    else if((c>=5 && c<=10) && (c1>32767 && c1<=2147483647))
        printf("int");
    else if((c>=10 && c<=19)&&(strcmp(str,"2147483647")>=1) && (strcmp(str,"9223372036854775808"))<=-1)
        printf("long");
    else
        printf("BigInteger");

}
