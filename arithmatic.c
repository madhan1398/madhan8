#include <stdio.h>
#include<conio.h>
int main(void)
{
int m,n,i,sum=0,d;
printf("\nEnter the initial value: ");
scanf("%d",&m);
printf("\nEnter the end value: ");
scanf("%d",&n);
printf("\nEnter the difference: ");
scanf("%d",&d);
for(i=m;i<=n;i=i+d)
{
sum+=i;
}
printf("\n%d\n",sum);
return 0;
}
