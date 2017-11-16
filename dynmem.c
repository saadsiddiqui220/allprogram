#include<stdio.h>
#include<stdlib.h>
main()
{
	
	int *ptr,i,n,m;
	scanf("%d",&n);
	ptr=(int *)(malloc(n*sizeof(int)));	

	
		for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));
		
		
	}
	scanf("%d",&m);
	ptr=realloc(ptr,(m*sizeof(int)));
for(i=0;i<m;i++)
	{
		scanf("%d",ptr+i);
		
		
	}
	
		for(i=0;i<m;i++)
	{
		printf("\n%d",*(ptr+i));
		
		
	}	
	
free(ptr);	
	
	
}
