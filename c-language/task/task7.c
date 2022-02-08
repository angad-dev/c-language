//WAP to print a rupee in 200 and 50
#include<stdio.h>
void main()
{
	int rupee,note,r,p;
	printf("Enter the rupee :");
	scanf("%d",&rupee);
	note=rupee/200;
	r=rupee%200;
	p=r/50;
	printf("the 200 rupee is %d \t 50 rupee is %d ",note,p);
}
