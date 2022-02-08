#include<stdio.h>
void main()
{
	char ch;
	int exit;
	do
	{
	printf("Enter any charecter a,b,c:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("this is a charecter");
			break;
		case 'b':
		case 'B':
			printf("This is b charecter");
			break;
		case 'c':
		case 'C':
			printf("This is c charecter");
			break;
		default:
			printf("Invalid charecter ");
			break;
	}
	printf("\nIf another print y|n :");
	fflush(stdin);
	scanf("%c",&exit);
	}while(exit=='y');
}
