#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is a greater");
}
if(b>c&&b>a)
{
printf("b is a greater");
}
else
{
printf("c is a greater");
}
  return 0;
}
