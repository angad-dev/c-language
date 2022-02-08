//wap to print qube of a number by using udf
//void cube()
//void cube()
#include<stdio.h>
void cube(int num)
{
	int num1;
	num1=num*num*num;
	printf("Cube is = %d",num1);
}
void main()
{
	int n;
	printf("Enter the numer : ");
	scanf("%d",&n);
	cube(n);
}
