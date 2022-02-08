//wap to input first name and last name of the user and print full name where first 
//name is uppercase and last name is lowercase

#include<stdio.h>
void main()
{
	char fname[100],lname[100];
	printf("Enter your first name : ");
	gets(fname);
	printf("Enter your last name : ");
	gets(lname);
	strupr(fname);
	strlwr(lname);
	strcat(fname,lname);
	printf("your full name is : %s",fname);
}
