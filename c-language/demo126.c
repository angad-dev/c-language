//wap to check a given string is a palindrome string or not by using pre defined function
#include<stdio.h>
void main()
{
	char name[100],rev[100];
	printf("Enter the name :");
	gets(name);
	strrev(name);
	strcpy(rev,name);
	if(strcmp(name)==0)
	{
		printf("name is polindrome");
	}
	else
	{
		printf("name is not polindrome");
	}
	
}
