#include <stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
	char m[850],r[800];
	printf("enter the two strings")
	scanf("%s %s",m,r);
	int m,n,i,j,u,k,l,x,y,z,flag=0;
	m=strlen(m);
	n=strlen(k);
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
	for(j=i+1;j<m;j++)
	{
	u=a[i];
	k=a[j];
	l=b[i];
	x=b[j];
  y=u-k;
	z=l-x;
	if(y==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	if(flag==1)
	{
		printf(" is a isomorphic");
	}
	else
	{
		printf("is a not isomorphic");
	}
	getch();
}
