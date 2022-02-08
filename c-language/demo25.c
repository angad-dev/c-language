#include<stdio.h>
void main()
{
	int a=10,b,c=2;
	//a++;
	//++a + ++a;
	//a=a++;
	b=++a + ++c + --a;
	printf("value is: %d",b);
}
