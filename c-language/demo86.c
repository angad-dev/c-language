//wap to print male on female based on m / f;
#include<stdio.h>
void main()
{
	char gen;
	printf("Enter gender m/f :");
	gen=getchar();
	switch(gen)
	{
		case 'm':
		case 'M':
			printf("Male");
			break;
		case 'f':
		case 'F':
			printf("female");
		default:
			printf("Invalid character");
	}
}
