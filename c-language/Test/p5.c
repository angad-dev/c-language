//wap to check number is prime or not
#include<stdio.h>  
int main()
{    
int n,i,temp=0,temp1=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
temp=n/2;    
for(i=2;i<=temp;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
temp1=1;    
break;    
}    
}    
if(temp1==0)    
printf("Number is prime");     
 
 }    
