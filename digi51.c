#include<stdio.h>
void main()
{
int x,y,*m,*n,sum;
clrscr();
printf("Enter the  two numbers to be added:");
scanf("%d%d",&x,&y);
m=&x;
n=&y;
sum=*m+*n;
printf("Addition is:%d",sum);
getch();
}
