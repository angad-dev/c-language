// Write a program to check whether the given number is positive number or not. 
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num<0)
	{
		printf("number is negative");
	}
	else
	{
		printf("number positive");
	}
}
