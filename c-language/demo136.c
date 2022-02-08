//structure
#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
}s1;   //a structure with tags
void main()
{
	printf("Please eneter roll no and name of first student :");
	scanf("%d",&s1.rollno);
	fflush(stdin);
	gets(s1.name);
	s1.rollno=s1.rollno+10;
	printf("roll no=%d and name=%s",s1.rollno,s1.name);
}
