//wap to input multiple value from user and find sum of all value until user input a negative value
#include<stdio.h>
void main()
{
	
	int n,ch,sum=0;
	do
	{
	printf("Enter the number :");
	scanf("%d",&n);
	sum=sum+n;
	if(n<0)
	break;
}
	while(ch=1);
	printf("finaly total sum is %d",sum);
}
