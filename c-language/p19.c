#include<stdio.h>
void main()
{
	int n1,n2;
	char another;
	do
	{
		printf("~~~the addition~~~\n");
		printf("Enter first no :");
		scanf("%d",&n1);
		printf("Enter secound no :");
		scanf("%d",&n2);
		printf("Result is =%d",(n1+n2));
		printf("\nIf you are another number press y|n\n");
		fflush(stdin);
		scanf("%d",&another);
	}
	while(another==0);
}
