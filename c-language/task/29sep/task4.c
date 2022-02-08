//wap to input a number and count how many digits is even and how
//how many digits is odd
#include<stdio.h>
void main()
{
	int num,rem,codd=0,ceven=0;
	printf("Enter the value of N: ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==1)
		codd++;
		else
		ceven++;
		num=num/10;
	}
	printf("count odd %d \n counteven %d",ceven,codd);
}
