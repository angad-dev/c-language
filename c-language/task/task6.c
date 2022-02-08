//WAP to input three number from user and find some and avarage of number
#include<stdio.h>
void main()
{
	int p,n,r,sum,avg;
	printf("Enter the three number :");
	scanf("%d %d %d",&p,&n,&r);
	sum=p+n+r;
	avg=sum/3;
	printf("The sum is %d\n",sum);
	printf("the avg is %d",avg);
}
