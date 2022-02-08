//
#include<stdio.h>
void main()
{
	char name[100];
	int i;
	printf("Enter the number:");
	gets(name);
	{
	if((name[i]>='a' && name[i]<='z')||(name[i]>='A' && name[i]<='Z'))
	name[i]=name[i]-32;
	}
	printf("%s \n uppercase",name);
}
