//wap to input from user while user choise is 1 and print sum of all 
//number
#include<stdio.h>
void main()
{
	
	int n,ch,sum=0;
	do
	{
	printf("Enter the number :");
	scanf("%d",&n);
	sum=sum+n;
	printf("sum is %d",sum);
	printf("\ndo you have another number press 1 :");
	scanf("%d",&ch);
}
	while(ch==1);
	printf("finaly total sum is %d",sum);
}
