#include<stdio.h>
#include<conio.h>
void main()
{
	int a,f;
	scanf("%d %d",&a,&f);
	a=a^f;
	f=a^f;
	a=a^f;
	printf("%d\t%d",a,f);
}
