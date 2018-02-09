#include <stdio.h>
#include<conio.h>
int main() 
{
int value;
int mul=27;
scanf("%d",&value);
while(mul<value)
{
mul=mul*27;
if(mul==value)
printf("no");
}
if(value==1)
printf("no");
return 0;
}
