//wap to count a digit of a number
#include <stdio.h>
void main()
{
	int count=0,n;
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits : %d",count);  
    return 0;  
}  

