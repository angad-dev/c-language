//wap to print memory location of a variable
void main()
{
	int a=5;
	printf("value is %d",a);
	printf("\nmemory address of variable is used : %d",(&a));
	printf("\n value at a memory address : %d",*(&a));
}
