//wap to convert rupee to paisa
//Int convert(float rupee)
#include<stdio.h>
int convert(float rupee)
{
	int paisa;
	paisa=rupee*100;
	return paisa;
}
void main()
{
	printf("paisa is %d",convert(5.5));
}
