//wap  to show choise in odd loops and manu driven program
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int choise;
	int exit;
	int no1,no2;
	do{
	printf("~~~~manu wise calculator~~~~ \n");
	printf("1. for addition press 1 \n");
	printf("2. for substraction press 2 \n");
	printf("3. for multiply press 3 \n");
	printf("4. for division press 4 \n");
	printf("press option :");
	scanf("%d",&choise);
	

	switch(choise){
		default:
			printf("Invalid option \n");
			break;
		case 1:
			system("cls");
			printf("~~~Perform Addition~~~\n");
			printf("Enter the no1:");
			scanf("%d",&no1);
			printf("Enter the no2:");
			scanf("%d",&no2);
			printf("result is = %d:",(no1+no2));
			break;
		case 2:
			system("cls");
			printf("~~~Perform substraction~~~\n");
			printf("Enter the no1:");
			scanf("%d",&no1);
			printf("Enter the no2:");
			scanf("%d",&no2);
			printf("result is = %d:",(no1-no2));
			break;
		case 3:
			system("cls");
			printf("~~~Perform multiplication~~~\n");
			printf("Enter the no1:");
			scanf("%d",&no1);
			printf("Enter the no2:");
			scanf("%d",&no2);
			printf("result is = %d:",(no1*no2));
			break;
		case 4:
			system("cls");
			printf("~~~Perform Divition~~~\n");
			printf("Enter the no1:");
			scanf("%d",&no1);
			printf("Enter the no2:");
			scanf("%d",&no2);
			printf("result is = %d:",(no1/no2));
			break;
		}
	printf("\n Do you want to exit [0|1]:");
	scanf("%d",&exit);
	system("cls");
	}
	while(exit==0);
	
 } 
