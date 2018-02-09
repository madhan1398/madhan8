#include <stdio.h>
#include<conio.h>
int main()
{
int n,m[800],i,add=0,ans;
printf("enter the size");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
scanf("%d",&m[i]);
for(i=0;i<n;i++)
{
 add=add+m[i];
}
ans=add/n;
printf("%d",ans);
return 0;
}
