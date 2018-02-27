#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,n,f=0;
    char m[800];
    printf("Enter the string:");
    scanf("%s",&m);
    n=strlen(m);
    for(i=0;i<n;i++)
    {
        if((a[i]=='0')||(a[i]=='1'))
        {
            f+=1;
        }
    }
    if(f==n)
    {
        printf("The given string is in binary representation");
    }
    else
    {
        printf("The given string is not in binary representation");
    }
