#include<stdio.h>
#include<conio.h>
int main()
{
	int m,count=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(m!=0)
	{
		m=m%10;
		count++;
		m=m/10;
		printf("%d",count);
		
	}
	return 0;
}
