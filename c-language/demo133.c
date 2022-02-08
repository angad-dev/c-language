#include<stdio.h>
void square(int *a)
{
	*a=*a * *a;
}
void main()
{
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	printf("value of a is :%d",a);
	square(&a);
	printf("\n value of a is :%d",a);
}
