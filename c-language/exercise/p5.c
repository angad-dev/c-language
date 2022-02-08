#include<stdio.h>
void display();
int main()
{
	printf("Learn c\n");
	display();
	return 0;
}
void display()
{
	printf("Followed by c++\n");
	main();
}
