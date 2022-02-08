//wap to convert rupee to paisa
//Void convert()
#include<stdio.h>
void convert()
{
	int rupee,paisa;
	printf("Enter the rupee:");
	scanf("%d",&rupee);
	paisa=rupee*100;
	printf("paisa is =%d",paisa);	
}
void main()
{
	convert();
}
