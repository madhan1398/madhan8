#include <stdio.h>
#include<conio.h>
int main()
{
int n,f=1,i;
printf("\nEnter the range: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f*=i;
}
printf("\n The factorial of the given number %d is %d",n,f);
return 0;
}
