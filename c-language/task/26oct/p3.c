
#include<stdio.h>
#include<string.h>
void main()
{char username[100];
int res;
printf("enter a username");
gets(username);
res=strncmp(username,"techpile",8);
printf("%d%",res);
if(res==0)
{printf("Welcome to techpile");

}
else{printf("invalid username ");
}
}
