//nested loop 
#include <stdio.h>  
int main()  
{  
   int n,i,j;// variable declaration  
   printf("Enter the value of n :");  
   scanf("%d",&n);
   // Displaying the n tables.  
   for(i=1;i<=n;i++)  // outer loop  
   {  
       for(j=1;j<=4;j++)  // inner loop  
       {  
           printf("%d\t",(i*j)); // printing the value.  
       }  
       printf("\n");  
   }
}
