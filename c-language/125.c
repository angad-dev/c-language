//wap to enter your name and name should be greater the 3 charecter
#include<stdio.h>
void main()
{
	char name[100];
	int len;
	printf("Enter your name : ");
	gets(name);
	len=strlen(name);
	printf("total charecter in string is : %d",len);
	if(len<3)
	printf("\nName should have atleast 3 charecter");
	else
	printf("\n your name is : %s",name);
}
