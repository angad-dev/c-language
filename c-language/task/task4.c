//WAP to simple inerest
#include<stdio.h>
void main()
{
	int ps,rate,time,sum;
	printf("Enter the value of ps,rate,time :");
	scanf("%d %d %d",&ps,&rate,&time);
	sum=ps*rate*time/100;
	printf("the simple inerest %d\n",sum);
}
