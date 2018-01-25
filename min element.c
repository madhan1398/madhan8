#include <stdio.h>
#include<stdio.h>
int main(void)
{
int a[100],n,min,i;
printf("\nEnter the size of the array is: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("\nThe minimum element  %d ",min);
return 0;
}
