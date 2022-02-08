//WAP to input percentage of student and check result status(pass or fail).
#include<stdio.h>
void main()
{
	float per;
	printf("Enter your percenyage :");
	scanf("%f",&per);
	if(per>=33)
	{
		printf("You are pass");
	}
	else
	{
		printf("You are fail");
	}
}
