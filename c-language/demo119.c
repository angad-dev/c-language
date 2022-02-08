//wap to input your name and print all charecter of your name in sepret line
#include<stdio.h>
void main()
{
	char name[50];
	int i;
	printf("ENter your name:");
	gets(name);
	i=0;
	while(name[i]!='\0')
	{
		printf("%c\n",name[i]);
		i++;
	}
}
