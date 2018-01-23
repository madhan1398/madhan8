#include<stdio.h>
int main()
{
int num,m=20,n=40;
printf("print the even number is a given range m to n:\n");
for(num=m;num<=n;num++)
{
if (num % 2 == 0)
printf ("%d", num);
}
return 0;
}
