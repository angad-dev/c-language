//Write a program to check whether the 
//given number is positive or negative or zero.
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number to check positive or negative or zero :");
	scanf("%d",&num);
	if(num<0)
	{
		printf("number is negative");
	}
	else if(num==0)
	{
		printf("number is zero");
	}
	else
	{
		printf("number is positive");
	}
 } 
