//
#include<stdio.h>
void main()
{ char name[100];
int i,alphabate=0,special=0,digit=0;
printf("enter a alphabate:");
gets(alphabate);
printf("enter a special");
gets(special);
printf("enter a digit");
gets(digit);
for(i=0;name[i]!='\0';i++)
{
if(name[i]>='a'&&name[i]&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z')
{
alphabate++;
}
else if (name[i]>='0'&&name[i]<='9')
{digit++;
}
else{special++;
}
printf("%dcount a alphabate",alphabate);
printf("%dcount a special character",special);
printf("%dcount a digit",digit);
}
}
