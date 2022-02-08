//WAP to input a charecter and print the inputed charecter
#include<stdio.h>
#include"demo12.c" //library user defined header files
void main()
{
	char ch;
	printf("please enter a single charecter  :");
	//scanf("%c",&ch);
	ch=getchar();
	printf("\ninputed charecter is : %c",ch);
	suraj(); //user defined function
}

