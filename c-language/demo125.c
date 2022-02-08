//wap to input password from user and print "your welcome" is password is techpile
#include<stdio.h>
void main()
{
	char pass[100];
	int res;
	printf("Enter your password : ");
	gets(pass);
	res=strcmp(pass,"techpile");
	if(res==0)
	printf("Your welcome");
	else
	printf("password is wrong");
}
