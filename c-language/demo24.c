//wap to input m for male and f for female and print the gender 
//like male are female
#include<stdio.h>
void main()
{
	int gen;
	printf("Enter the m - for nale and f- for female");
	gen=getch();
	gen=='m'? printf("\ngender is male"):(gen=='f')? 
	printf("\ngender is female"):
	printf("\nyou enter the invalid");
}
