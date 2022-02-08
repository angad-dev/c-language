#include<stdio.h>
int checkPalindrome(int number)
{
  int temp, remainder, rev=0;
  temp = number;
  for( ; number>0 ; number=number/10)
  {
  	remainder = number % 10;
     rev = rev*10 + remainder;
     number /= 10;
  }
  if ( rev == temp ) return 0;
  else 
  return 1;
}
int main()
{
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	if(checkPalindrome(a)==0)
	{
		printf("not polindrome");
	}
	else
	{
		printf("polindrome");
	}
}
