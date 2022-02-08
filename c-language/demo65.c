//WAP to find the multiplication of all number that is divisible by 3 and 5 both 
//within a given series
#include<stdio.h>
void main()
{
	int i,n,mul;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		mul=mul*i;
	}
	printf("total value devided by 3 and 5 is :  %d",mul);
}
