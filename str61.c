#include <stdio.h>
#include<string.h>
int main()
{
    char m[80];
    int i,n;
    printf("Enter the string");
    scanf("%s",&m);
    printf("Enter the number of letters to be displayed");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",m[i]);
    }

    return 0;
}
