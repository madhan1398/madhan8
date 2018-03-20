#include<stdio.h>
#include<conio.h>
void main()
{
    int i,m,k,rev;
    scanf("%d",&m);
    while(m%10!=0)
    {
      k=m%10;
      rev=10*rev+k;
      m=m/10;
    }
    printf("%d",rev);
    getch();
}
