#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<=60;i++);
	{
		if(i==60)
		{
		printf("secound is %d\n",i);
	}
		for(j=0;j<=60;j++)
		{
			if(j==60)
			{
			printf("minute is %d\n",j);
		}
			for(k=0;k<=60;k++)
			{
				if(k==60)
				{
				printf("hour is %d\n",k);
			}
			}
		}
	}
}
