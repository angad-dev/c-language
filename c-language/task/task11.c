//Check whether the given number is multiple of 7 or not.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number to print :");
	scanf("%d",&num);
	if(num%7==0)
	{
		printf("number is multiple of 7");
	}
	else
	{
		printf("number is not multiple of 7");
	}
}
