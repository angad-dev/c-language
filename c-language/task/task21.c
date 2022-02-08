//Write a program to calculate net amount by accepting amount value from user
#include<stdio.h>
void main()
{
	int amount,netamount;
	printf("Enter the amount :");
	scanf("%d",&amount);
	if(amount>=1 && amount<=1000)
	{
		netamount=(amount-(amount*5)/100);
		printf("calculate amount is :%d",netamount);
	}
	else if(amount>=1001 && amount<=2000)
	{
		netamount=(amount-(amount*10)/100);
		printf("calculate amount is :%d",netamount);
	}
	else if(amount>=2001 && amount<=3000)
	{
		netamount=(amount-(amount*15)/100);
		printf("Calculate amount is :%d",netamount);
	}
	else if(amount>=3001 && amount<=4000)
	{
		netamount=(amount-(amount*20)/100);
		printf("calculate amount is :%d",netamount);
	}
	else
	{
		netamount=(amount-(amount*25)/100);
		printf("calculate amount is :%d",netamount);
	}
}
