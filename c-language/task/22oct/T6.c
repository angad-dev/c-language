//length of string
#include<stdio.h>
void main()
{
	char name[100];
	int i;
	printf("Enter the number:");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++);
	printf("total of string length is: %d",i);
}
