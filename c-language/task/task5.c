//wap convert minutes to the hour and remaining minutes
#include<stdio.h>
void main()
{
	int m,hr,min;
	printf("Enter the minutes :");
	scanf("%d",&m);
	hr=m/60;
	min=m%60;
	printf("hour is %d \t minutes is %d",hr,min);
	
}
