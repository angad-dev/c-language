//wap to input a number of day and print of the day
#include<stdio.h>
void main()
{
	int day;
	printf("Enter the number of day :");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("mon");
			break;
		case 2:
			printf("tue");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thirsday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;
		default:
			printf("This is invalid number");
	}
}
