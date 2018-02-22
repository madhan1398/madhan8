
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r,f;
	scanf("%d",&a);
	scanf("%d",&r);
	f=a;
	a=r;
	r=f;
	printf("%d\f%d",a,r);
}
