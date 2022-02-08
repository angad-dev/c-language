#include<stdio.h>
void main()
{
	char alpha;
	printf("Enter a charecter :");
	alpha=getche();
	if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
	{
		if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
		{
			printf("\nCharecter is vovel");
		}
		else
		{
			printf("\nCharecter is consonent");
		}
	}
	else
	{
		printf("\nYou type invalid charecter");
	}
}
