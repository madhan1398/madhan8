#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,k[50],large,small;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&k[i]);
}
large=small=a[0];
for(i=0;i<n;i++)
{
if(k[i]>large)
large=k[i];
if(k[i]<small)
small=k[i];
}
printf("%d\n",small);
printf("%d\n",large);
return 0;
}
