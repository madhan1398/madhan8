#include<stdio.h>
#include<conio.h>
    void main()
    {
    	int a[27],f,i;
    	for(i=0;i<=27;i++)
    	{
    	    scanf("%d",&a[i]);
    	}
    	b=a[0];
    	for(i=0;i<=27;i++)
    	{
    		if(a[i]>b)
    		{
    	b=a[i];
    	}
    }
    
    printf("%d",b);
   return 0;
    }
