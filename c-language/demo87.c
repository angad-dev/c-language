//wap to input a number 1234 
#include<stdio.h>
void main()
{
	int num,rem;
	printf("Enter a number :");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		switch(rem)
		{
			case 0:
				printf(" zero");
				break;
			case 1:
				printf(" one");
				break;
			case 2:
				printf(" two");
				break;
			case 3:
				printf(" three");
				break;
			case 4:
				printf(" four");
				break;
			case 5:
				printf(" five");
				break;
			case 6:
				printf(" six");
				break;
			case 7:
				printf(" seven");
				break;
			case 8:
				printf(" Eight");
				break;
			case 9:
				printf(" nine");
				break;
			
		}
		num=num/10;
	}
}
