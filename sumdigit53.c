#include<stdio.h>
#include<conio.h>
int main()
{
int z,rem,sum=0;
scanf("%d",&n);
while(n!='\0')
{
rem=z%10;
sum=sum+rem;
z=z/10;
}
printf("%d",sum);
return 0;
}
