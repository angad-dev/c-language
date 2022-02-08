//wap to find maximum in the given three number
#include<stdio.h>
int main()
{
	int a,b,c,largest;
	printf("Enter the three number to print maximum number :");
	scanf("%d%d%d",&a,&b,&c);
	largest=((a>b && a>c) ? a:(b>c) ? b:c);
	printf("the largest value is %d",largest);
	
}
