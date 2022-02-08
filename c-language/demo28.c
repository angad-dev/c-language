#include<stdio.h>
int var=20;//Global variable
void main()
{
	int var=20;
	printf("var=%d",var);
	fun();
}
void fun()
{
	printf("var=%d",var);
}
