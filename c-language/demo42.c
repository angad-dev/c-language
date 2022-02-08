//wap to ckeack switch statement
#include<stdio.h>
void main()
{
	while(1)
	{
	int choise,a,b,s;
	printf("\nAddition");
	printf("\nodd even");
	printf("\nprinting n number");
	printf("\nExit");
	
	printf("\nEnter your choise :");
	scanf("%d",&choise);
	switch(choise)
	{
		case 1:
			printf("Enter a number :");
			scanf("%d%d",&a,&b);
			s=a+b;
			printf("the addition is :%d",s);
			break;
		case 2:
			printf("Enter a number :");
			scanf("%d",&a);
			if(a%2==0)
				printf("The number is even");
			else
				printf("The number is odd");
			break;
		case 3:
			printf("Enter the number :");
			scanf("%d",&a);
			for(b=1;b<=a;b++)
				printf( " %d",b);
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid number");
	}
	getch();
}
}
