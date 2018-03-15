#include<stdio.h>
#include<conio.h>
void main()
{
int r,count=0,i;
clrscr();
printf("enter the value");
scanf("%d",&r);
for(i=2;i<=(r/2);i++)
{
if(r%i==0)
{
count++;
}
}
if(count==0)
printf("it is a prime number");
else
printf("it is not a prime number");
getch();
}
