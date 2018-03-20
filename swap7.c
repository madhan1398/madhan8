#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
void main()
{
    char a[80],temp,i,l;
    printf("enter  the string");
    scanf("%s",&a);
    l=strlen(arr);
    for(i=0;i<l;i=i+2){

            if(i%2==0){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
    }
    printf("%s",a);
    
}
