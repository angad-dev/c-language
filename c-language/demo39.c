//wap to cheack a persion eligble for hr or not
//only female candidates are allowed
#include<stdio.h>
void main()
{
	char gen;
	printf("enter m if you are male and enter f if you are female :");
	gen=getch();
	if(gen=='f')
	{
		printf("\nYes you are eligible to apply");
	}
	if(gen!='f')
	{
		printf("\nNo You are not eligble to apply");
	}
}

