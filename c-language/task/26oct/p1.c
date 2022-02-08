//wap to input first name and last name of the user and print ful name where
#include<stdio.h>

void main()
{
	char fname[100],lname[100];
	printf("enter a first name:");
	gets(fname);
	printf("enter alast name:");
	gets(lname);
	strupr(fname);
	strlwr(lname);
	strcat(fname,lname);
	printf("%s",fname);
}
