//wap to input your gender in (m/f) and your age and print values
#include<stdio.h>
void main()
{
	char gen;
	int age;
	printf("Enter your age in year :");
	scanf("%d",&age);
	printf("enter gender first charecterb(m/f)) :");
	scanf("%d",&gen);
	printf("your gender is %c and age is :%d",gen,age);
}
