//wap to convert rupee to paisa
//Int convert()
#include<stdio.h>
int convert()
{
	int rupee,paisa;
	printf("Enter the rupee: ");
	scanf("%d",&rupee);
	paisa=rupee*100;
	return paisa;
}
void main()
{
	printf("paisa is= %d",convert());
}
