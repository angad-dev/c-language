//Write a program to check whether the entered number is less than 10 or not
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num<10)
	{
		printf("number is less then 10");
	}
	else
	{
		printf("number is not less then 10");
	}
}
