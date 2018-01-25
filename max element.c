#include <stdio.h>
#include<conio.h>
int main()
{
int a[100],n,max,i;
printf("\nEnter the size of the array is : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];}
}
printf("\nThe maximum element  %d ",max);
return 0;
}
