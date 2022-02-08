//wap to print digit of a number sepret line
#include<stdio.h>
void main()
{
	int num,rem,sum;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
		
		
	}
	printf("Sum of digits = %d",sum);
}
