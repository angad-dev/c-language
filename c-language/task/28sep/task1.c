//WAP to find the multiplication of all number that is 
//divisible by 3 and 5 both within a given series
#include<stdio.h>
void main()
{
	int i,mul3=1,mul5=1,n;
	printf("Enter the number to print divisible:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		mul3=mul3*i;
		else if(i%5==0)
		mul5=mul5*i;
	}
	printf("dividisble multiply is 3 =%d \n divisible multiply by 5 is =%d",mul3,mul5);
}
