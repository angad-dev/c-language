//WAP to check result status of student based on the percentage
#include<stdio.h>
void main()
{
	float per;
	printf("Enter the value of percentage");
	scanf("%f",&per);
	if(per>=0 && per<=100)
	{
	if(per>=60 && per<=100)
	{
		printf("You are first division");
	}
	else if(per>=45 && per<=59)
	{
		printf("You are secound division");
	}
	else if(per>=33 && per<=44)
	{
		printf("You are third division");
	}
	else
	{
		printf("You are fail");
	}
}
else
{
	printf("You are print invalid statement");
}
}
