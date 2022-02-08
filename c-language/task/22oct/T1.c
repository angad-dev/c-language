//wap to count total occurance of 'a' in your name
#include<stdio.h>
void main()
{
	char name[100];
	int i,count=0;
	printf("Enter your name : ");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==97|| name[i]==65)
		count++;
	}
	printf("total %d time 'a' is present in string ",count);
}
