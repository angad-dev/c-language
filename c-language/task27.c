//Write a program to find product of first n numbers
#include<stdio.h>
void main()
{
	int n,sum=0,count;
	printf("Enter the count number :");
	scanf("%d",&n);
	for(count=1; count<=n; count++)
		sum=sum*count;
	printf("The sum of %d natural number is %d",n,sum);
}
