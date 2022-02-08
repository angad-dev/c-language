//WAP yo calculate simple intrest value :(princeple amount*rate*time)/100
#include<stdio.h>
void main()
{
	const int val=100;
	//val=val+10;
	float pa,rate,time,si;
	printf("Enter princeple ammount :");
	scanf("%f",&pa);
	printf("Enter rate of untrest :");
	scanf("%f",&rate);
	printf("Enter Time of intrest :");
	scanf("%f",&time);
	si=(pa*rate*time)/val;
	printf("total simple intrest for %.1f time with %.1f rate is %.1f",time,rate,si);
}             
