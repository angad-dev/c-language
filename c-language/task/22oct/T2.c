//wap to count total words present in a string
#include<stdio.h>
void main()
{
	char name[100];
	int i,words=1;
	printf("Enter the name:");
	gets(name);
	i=0;
	while(name[i]!='\0')
	{
		if(name[i]==' ' || name[i]=='\n' || name[i]=='\t')
		{
			words++;
		}
		i++;
		}	
		printf("total words is: %d",words);
}
