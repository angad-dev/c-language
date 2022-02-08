//WAP to print sum of square of two numbers only if first number is greater than 5 and second is exactly 5.
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter two number to print sum of square :");
	scanf("%d%d",&a,&b);
	c=a*a;
	d=b*b;
	if(a>=5 && b==5)
	{
		printf("the sum of square value is:%d",c+d);
	}
}
