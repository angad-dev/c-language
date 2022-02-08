//wap to input a number and check the number is polindrom r not
#include<stdio.h>
void main()
{
	int num,sum=0,rem,temp;
	printf("Enter the number to check polindrome :");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;//extract digits from ones rem=3
		sum=sum*10+rem; //sum=3
		num=num/10;//delete last digit of number num=2
		//printf("%d",rem);
		
	}
	if(temp==sum)
	printf("Number is polindrome");
	else
	printf("Number is not polindrome");
}
