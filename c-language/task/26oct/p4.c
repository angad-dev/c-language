//wap to check all given by using function of c
#include<stdio.h>
void main()
{
	char name[100],rev[100];
	printf("enter a name :");
	gets(name);
	strcpy(rev,name);
	strrev(name);
	strcmpi(rev,name);
	printf("%s",name);
	if(strcmp(rev,name)==0)
	{printf("polindrome number");
}
	
	else{
	
	printf("not a polindrome number");
	}
}
