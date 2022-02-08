/*wap with a udf to find factorial of a number 
(with argument , without argument)*/
#include<stdio.h>
void getfact(int num)
{
	int i,mul=1;
	for(i=1;i<=num;i++)
	{
		mul=mul*i;
	}
	printf("factorial= %d",mul;
}
void main()
{
	int a;
	printf("Enter a number to find factorial");
	scanf("%d",&a);
	getfact(a);
}
