/*
           *
          * *
         * * *
       * * * * *
      * * * * * *
    * * * * * * * *
  * * * * * * * * * *
    * * * *  *  * * 
     *  *  *  *  * 
       * * * * * 
        * * * * 
         * * * 
          * * 
           *
*/
#include<stdio.h>
int main()
{
int s, i, j;
for(i = 0; i <= 7; i++)
{
for(s = 7; s > i; s--)
printf(" ");
for(j=0; j<i; j++)
printf("* ");
printf("\n");
}
for(i = 1; i < 7; i++)
{
for(s = 0; s < i; s++)
printf(" ");
for(j = 7; j > i; j--)
printf("* ");
printf("\n");
}
}
