//Write a program to check whether the given year is a leap year or not. 
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("This year is leap year");
	}
	else
	{
		printf("This is not leap year");
	}
}
