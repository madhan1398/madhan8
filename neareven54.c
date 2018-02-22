#include <stdio.h>
#include<conio.h>
int main()
{
  int m;
  scanf("%d",&m);
  if(m%2!=0)
  {
    printf(" the nearest even number is: %d",m-1);
  }
  else
  {
    printf("nearest even number is: %d",m-2);
  }
  }
