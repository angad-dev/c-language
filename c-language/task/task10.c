// Write a program to check whether the given number is even or odd. 
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number to print odd or even :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}
