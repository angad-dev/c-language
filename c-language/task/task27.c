//Write a program to find product of first n numbers
#include<stdio.h>
void main()
{
	int n,mul=1,count;
	printf("Enter the count number :");
	scanf("%d",&n);
	for(count=1; count<=n; count++)
		mul=mul*count;
	printf("The mul of %d natural number is %d",n,mul);
}
