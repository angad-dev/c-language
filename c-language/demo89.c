//wap to input a number and print number is even or odd till user input 
//a neg number
#include<stdio.h>
void main()
{
	int num;
	start:
	printf("Enter the number :");
	scanf("%d",&num);
	if(num<0)
	goto end;
	if(num%2==0)
	printf("Even number\n");
	else
	printf("Odd number\n");
	goto start;
	end:
		printf("##");
}
