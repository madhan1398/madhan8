#include<stdio.h>
#include<conio.h>
void main()
{
int r,m=0,i;
printf("enter the r value");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(r%i==0)
{
m++;
}
}
if(m==0)
{
printf(" it is a prime");
}
else
{
printf("it is a composite");
}
return 0;
}
