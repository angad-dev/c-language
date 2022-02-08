//Write a program to check whether the given character is 
//lowercase alphabet or not
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the charecter :");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("Charecter is uppercase");
	}
	else
	{
		printf("charecter is lowercase");
	}
}
