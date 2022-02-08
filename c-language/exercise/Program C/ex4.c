//WAP to print square of number only if number is 5 or 3
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	if(a==3 || a==5)
	{
		printf("sqoare is %d",a*a);
	}
}
