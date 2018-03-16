
#include<stdio.h>
#include<conio.h>
void main()
{
char str[800];
int m,r;
scanf("%s",&str);
r=strlen(str);
if(l%2!=0)
m=l/2;
str[m]='*';
printf("%s",str);
else
m=l/2;
str[m]='*';
str[m-1]='*';
printf("%s",str);
}
