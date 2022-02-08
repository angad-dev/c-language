#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;;)
	{
		if(i==60)
		{
			break;
		}
		printf("hour is %d\n",i);
		i++;
		
	}
	for(j=0;;)
	{
		if(j==60)
		{
			break;
		}
		printf("minut is %d\n",j);
		j++;
		
	}
	for(k=0;;)
	{
		if(k==60)
		{
			break;
		}
		printf("second is %d\n",k);
		k++;
		
	}
}

