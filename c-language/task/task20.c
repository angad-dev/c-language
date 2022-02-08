//Write a program to perform 
//calculator operations( +, -, *, / ) on given two numbers. 
#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter the number to calculate :");
	scanf("%d%d",&num1,&num2);
	printf("\nAddition of number : %d",num1+num2);
	printf("\nSubstract of number :%d",num1-num2);
	printf("\nmultiplication of number :%d",num1*num2);
	printf("\ndivided of number :%d",num1/num2);
}
