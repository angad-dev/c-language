//WAP to demonstrate the use of arithmetic operator
#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter three number :");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("some of number is : %d",(n1+n2+n3));
	printf("\nsubstract of first & second number is: %d",(n1-n2));
	printf("\nmultiply result of last two values is : %d",n3*(n1-n2));
}
