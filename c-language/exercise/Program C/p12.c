#include<stdio.h>
void main()
{
add();
}
void add()
{
	int a,b,count;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	count=a+b;
	printf("%d",count);
}
