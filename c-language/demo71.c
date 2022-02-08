//work on each digits of a number
//WAP to enter a 2 digits number and find sum of number
#include<stdio.h>
void main()
{
	int num,sum=0,rem,count;
	printf("Enter 2 digit of number :");
	scanf("%d",&num);
	for(;num>0;num=num/10)
	{
		count++;
		rem=num%10;
		sum=sum+rem;
		//printf("%d\n",rem);
	}
	printf("%d\n",sum);
	printf("total digits is:%d",count);
	;
	
	//rem=num%10;
	//sum=sum+rem;
	//num=num/10;
	
	
	//rem=num%10;
	//sum=sum+rem;
	//num=num/10;
	
	//rem=num%10;
	//sum=sum+rem;
	//num=num/10;
	
	//printf("sum of 3 digits number is :%d",sum);
}
