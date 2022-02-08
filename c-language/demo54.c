//wap to print from n to 10
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number to start loop :");
	scanf("%d",&a);
	if(a<=10)
	{
	
	for(; a<=10; a=a+1)
	{
		printf("%d\n",a);
	}
}
else
{
	for(; a>=10; a=a-1)
	{
		printf("%d\n",a);
	}
}
	
}
