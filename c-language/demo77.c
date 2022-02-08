//WAP to ask to input gender first character (m/f) from 10 users and count how 
//many female and how many males are present here
#include<stdio.h>
void main()
{
	int i,m=0,f=0;
	char gen;
	for(i=1;i<=10;i++)
	{
		printf("Enter your gender (m/f) :");
		scanf("%c",&gen);
		fflush(stdin);
		if(gen=='m')
		m=m+1;
		else if(gen=='f')
		f=f+1;
		
	}
	printf("Total female is =%d and total male is =%d",f,m);
}
