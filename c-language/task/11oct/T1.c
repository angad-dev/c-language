//WAP with following UDF
//Void checkpalindrome(int num);
#include<stdio.h>
void checkpolindrome(int num)
{
	int r,sum=0;
	while(num>0)
	{
		r=num%10;
		sum=(sum*10)+r;
		num=num/10;
	}
	if(num==0)
	{
		printf("number is polindrome");
	}
	else
	{
		printf("number is not polindrome");
	}
}
void main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	checkpolindrome(n);
}
