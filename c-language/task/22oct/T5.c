//wap to input your name and print all words of name in new lines.
#include<stdio.h>
void main()
{
	char name[100];
	int i;
	printf("Enter the name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
		if(name[i]==' ')
		{
			printf("\n");
		}
	}
}
