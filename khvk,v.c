#include<stdio.h>
#include<string.h>
int mystrcmp(char a[],char b[],int m)
{
	int i;
	for(i=0;i<m;i++)
	  {
		if(a[i]==b[i]&&i!=(m-1))
		continue;
		else if(a[i]>b[i])
		return (1);
		else if(a[i]<b[i])
		return (-1);	
		else return 0;
		
     	}
	}
	main()
	{
		int a[20],b[20];
		puts("enter the strings");
		gets(a);
		gets(b);
		if(strlen(a)>strlen(b))		
			printf("\n%d",mystrcmp(a,b,strlen(a)));
		else
		printf("\n%d",mystrcmp(a,b,strlen(b)));
	
	}
	
	


