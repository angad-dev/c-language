//wap to check polindrome
//void checkpolindroe (int num)
#include<stdio.h>
void checkpolindrome(int num)
{
	int i,sum=0,rem,temp;
	temp=num;
	for( ; num>0 ;num=num/10)
	{
		rem=num%10;
		sum=sum*10+rem;
		
	}
	if(temp==sum)
	{
		printf("Number is polindrome");
	}
	else
	{
		printf("Number is not polindrome");
	}
}
void main()
{
	checkpolindrome(51);
}
