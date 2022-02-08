#include<stdio.h>
int add2number()
{
	int a,b;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter secound number");
	scanf("%d",&b);
	return a+b;
}
int add3number()
{
	int c,res;
	printf("ENter one number :");
	scanf("%d",&c);
	res=add2number()+c;
	return res;
}
void main()
{
	int a;
	printf("please enter choise number");
	scanf("%d",&a);
	switch(a){
	
	case 1:
		printf("%d",add2number());
		break;
	case 2:
		printf("%d",add3number());
		break;
	}
	//printf("%d",add3number());
}
//enter a choise(wants to add 2number or 3 number):
