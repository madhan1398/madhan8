#include<stdio.h>
3include<conio.h>
void main()
{
   int m=0,k=1,j=0,i,n;
   printf("Enter the length of series:");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
 {
    printf("%d",m);
    j=m+k;
    m=k;
    k=j;
  }
}
