//wap to count total words present in a string
#include<stdio.h>
void main()
{
	char name[30];
	int i,count=0;
	printf("Enter the name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		count++;
		
	}
	printf("total space %d ",count);
}
