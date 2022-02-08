//wap to input your name and print rverse of your name
#include<stdio.h>
void main()
{
	char name[50];
	int i;
	printf("Enter your name:");
	gets(name);
	for(i=49;i>0;i--)
	{
		printf("%c",name[i]);
		
	}
}
