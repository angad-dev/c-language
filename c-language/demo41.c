//WAP to cheack a year is a leap year or not 
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
//	if(year>2000)
//	{
	if(year%4==0 && year>2000)
	{
		printf("This is leap year");
	}
//}
	if(year%4!=0)
	{
		printf("This is not leap year");
	}
}
