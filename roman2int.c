#include<stdio.h>
#include<conio.h>
#include<string.h>
 main()
{
	
    char m[800];
        int p=0 , i;

    gets(m);
   
    for(i=0 ; i < a[i] != '\0' ; i++)
{
	if(m[i] == 'i'){
	
	
	p= p+1;
}

	else if( m[i] == 'v') 
{
	p=p+5;
}
	else if( m[i] == 'x')
{
		p= p + 10;	
	}
}
 
  for(i=0 ; i < m[i] != '\0' ; i++)
{
	if(m[i] == 'i' && (m[i+1] == 'v' ||   m[i+1]== 'x'))
	p = p-2;
	}
	   
	printf("%d\n",p);
  getch();
}
