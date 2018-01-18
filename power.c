#include<stdio.h>
void main()
{
int num,pow;
int solution=1;
{
printf("Enter the number:");
scanf("%d",&num);
}
{
printf("Enter the power:");
scanf("%d",&pow);
}
while(pow!=0)
{
solution=num;
--pow;
}
printf("result=%11d",solution);
}
