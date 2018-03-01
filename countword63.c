#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char m[800];
printf("Enter a sentence:");
scanf("[^\n]%*n",m);
int k,i,n=1;
for(i=0;m[i]!='\0';i++)
{
if(m[i]==' ')
n++;
}
printf(" total number of words is %d",n);
return 0;
}
