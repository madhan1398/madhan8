#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
char s[200];
printf("enter the string\n");
gets(s);
printf("enter the count\n");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%s\n",s);
return 0;
}
