#include <stdio.h>

int main()

{
       int ara[10], i;

       for(i = 0; i < 10; i++){
              scanf("%d", &ara[i]);
       }
       i = 0;

       while(i < 10){
              printf("%d\n", ara[i]);

              i++;
       }
       return 0;
}
