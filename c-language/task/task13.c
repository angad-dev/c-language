//Write a program to calculate net amount by accepting amount value from user. 
//Amount(Rs)               Discount(%)  
//Amount>=5000               10%
//Otherwise                  5% 

#include<stdio.h>
void main()
{
	int amount,netamount;
	printf("Enter the amount :");
	scanf("%d",&amount);
	if(amount>=5000)
	{
		netamount=(amount-(amount*10)/100);
		//netamount=num-amount;
		printf("Calculate amount is %d",netamount);
	}
	else
	{
		netamount=amount-((amount*5)/100);
		//netamount=num-amount;
		printf("Calculate amount is %d",netamount);
	}
}
