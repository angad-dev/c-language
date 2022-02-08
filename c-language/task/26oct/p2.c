//wap to input username and password from user and print a messege "welcome to techpile " if username 
//is "techpileuser" and password is techpile
#include<stdio.h>
void main()
{char username[100];
char pass[100];
int res;
printf("enter a username");
gets(username);
printf("enter a pass word: ");
gets(pass);
res=strcmpi(pass,"techpile");
res=strcmpi(username,"techpilest21");
printf("%d%d",res);
if(res==0)
{printf("valid username and password");

}
else{printf("invalid username password");
}
}
