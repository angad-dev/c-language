/*wap with a udf to find factorial of a number 
(with argument , without argument)*/
#include<stdio.h>
void getfact()
{
	int i,mul=1,num;
	printf("Enter the number to print");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		mul=mul*i;
	}
	printf("factorial= %d",mul);
}
void main()
{
	
	getfact();
}
