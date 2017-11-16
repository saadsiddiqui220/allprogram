
#include <stdlib.h>
#include <stdio.h>

main()
{
	
	int j=0,i=0,a[21][21]={0,0};
	
	for(i=1;i<=20;i++)
	{
			for(j=1;j<20;j++)
		a[i][j]=(i*j);
			
	}
for(i=1;i<=20;i++)
	{		printf("\n");
		
			for(j=1;j<=20;j++)
		printf("%d\t",a[i][j]);
			
	}
	return 0;

}
