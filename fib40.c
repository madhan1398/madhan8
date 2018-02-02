#include<stdio.h>
#include<conio.h>
int main()
{
int first=0,second=1,i,n,next;
printf("enter a number: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
next=first+second;
first=second;
second=next;
}
printf(" fibonacci result is %d",next);
return 0;
}
