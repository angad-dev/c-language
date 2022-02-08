// Write a program to evaluate student result by reading marks in 
//three subjects  from user.(Pass or Fail) 
#include<stdio.h>
void main()
{
	int hindi,english,math,per,total;
	printf("Enter the number of hindi :");
	scanf("%d",&hindi);
	printf("Enter the number of english :");
	scanf("%d",&english);
	printf("Enter the number of math :");
	scanf("%d",&math);
	total=hindi+english+math;
	printf("Total number of subject %d",total);
	per=total/3;
	printf("\ntotal percentage %d",per);
	if(per<=33)
	{
		printf("\nYou are fail");
	}
	else
	{
		printf("\nYou are pass");
	}
}
