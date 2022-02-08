#include<stdio.h>
void main()
{
	printvalue();//pre defined
	printvalue();
}
void printvalue()
{
	static int a=0;
	a=a+10;
	printf("\nvalue is :%d",a);
}
