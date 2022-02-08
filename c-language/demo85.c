//wap to find number is even or odd by using switch
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the vlue :");
	scanf("%d",&num);
	switch(num%2)
	{
		case 0:
			printf("Even number");
			break;
		case 1:
			printf("odd number");
			break;
	}
}
