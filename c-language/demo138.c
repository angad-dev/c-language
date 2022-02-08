//wap to input 10 student name and age and print student is eligible to voting or not with name
#include<stdlib.h>
#include<stdio.h>
typedef int NUM;
typedef struct vote
{
	int age;
	char name[20];	
}details;
void main()
{
	details s[10];
	NUM i;
	for(i=0;i<=9;i++)
	{
		printf("Enter age of %d student",i+1);
		scanf("%d",&s[i].age);
		fflush(stdin);
		printf("Enter name of %d student :",i+1);
		gets(s[i].name);
	}
	for(i=0;i<=9;i++)
	{
		if(s[i].age>=18)
		printf("%s is eligble for voting \n",s[i].name);
	}
}
