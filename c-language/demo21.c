//wap to input total fee of your gradustion and there is 10% discount
//if fee is greater than 20000 and there is 20% discount if fee is 
//less than 20000 calculatte the total fee after discount

#include<stdio.h>
void main()
{
	int fee,disper;
	printf("Enter the actual fee :");
	scanf("%d",&fee);
	disper=fee>20000?10:(fee==20000?15:20);
	printf("Dicounted fee is : %d",fee-((fee*disper)/100));
}
