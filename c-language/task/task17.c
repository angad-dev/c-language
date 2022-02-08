// Write a program to check the given character is alphabet or not
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the charcter :");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch>=97 && ch<=112)
	{
	printf("Charecter is alphabet");
	}
	else
	{
		printf("charectre is not alphabet");
	}
}
