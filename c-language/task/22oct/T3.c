//wap to print length of a string without using pre defined function
#include<stdio.h>
void main()
{
	char name[100];
	int length;
	printf("Enter the name : ");
	gets(name);
	length=strlen(name);
	printf("total length of string %d",length);
}
