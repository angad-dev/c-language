//WAP to input percentage of student and check result status(pass or fail).
#include<stdio.h>
void main()
{
	float per;
	printf("Enter your percenyage :");
	scanf("%f",&per);
	if(per>=0 && per<=100)
	{
	if(per>=33)
	{
		printf("You are pass");
	}
	else
	{
		printf("You are fail");
	}
}
else
{
	printf("You are type invalid percentage");
}
}
