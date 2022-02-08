#include<stdio.h>
void main()
{
	int pa,rate,time,si;
	printf("Enter the pa:");
	scanf("%d",&pa);
	printf("Enter rt:");
	scanf("%d",&rate);
	printf("Enter time: ");
	scanf("%d",&time);
	si=(pa*rate*time)/100;
	printf("%d",si);
}
