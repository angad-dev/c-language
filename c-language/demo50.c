//WAP to input a character and print character in uppercase if the inputed value is alphabet and in lowercase
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a lowercase charecter :");
	ch=getchar();
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		if(ch>='a' && ch<='z')
		{
	ch=ch-32;
	printf("Charecter is uppercase: %c",ch);
}
else
{
	printf("Charecter is already Uppercase");
}
}
else
{
	printf("Charecter is not alphabet . can not be converted in uppercase");
}
}
