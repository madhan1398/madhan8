#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
   char str[800], temp;
   int m,r=0;
   printf("\nEnter string :");
   gets(str);
  m=0;
   r=strlen(str)-1;
 while(m<r) 
   {
      temp=str[m];
      str[m]=str[r];
      str[r]=temp;
      m++;
      r--;
   }
 printf("\nReverse string is :%s",str);
 getch();
