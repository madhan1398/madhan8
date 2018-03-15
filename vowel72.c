#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char r[800];
int i,count=0;
printf("Enter the string:");
get(r);
for(i=0;i!=strlen(r);i++)
{
if(a[i]=='a'||a[i]=='e'||a=='i'||a[i]=='o'||a[i]=='u')
count++;
}
if(count==0)
printf("Vowel is  present");
else
printf("Vowel is not present");
}
