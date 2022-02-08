//wap in c to show if-else togather
#include<stdio.h>
void main()
{
	if(10)
	{
		printf("if is executing \n");
		goto else_block;
	}
	else
	{
		else_block:
		printf("else is executing \n");
	}
}
