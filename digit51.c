#include <stdio.h>
#include<conio.h>
int main() 
{
	int i=0,n,count=0,k[800];
	printf("enter  number");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
		count++;
	}
	for(i=count-1;i>=0;i--)
	printf("%d",k[i]);
	return 0;
}
