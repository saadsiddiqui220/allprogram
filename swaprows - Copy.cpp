                                    
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,c[3][3];
    
    printf("enter data in matrix\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);
    }
      printf("entered matrix is\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
     for(j=0;j<3;j++)
     printf("%d\t",a[i][j]);
    }
    for(i=0;i<3;i++)
	{
	
	if(i==0)
	{
	 for(j=0;j<3;j++)
    c[i][j]=a[i+2][j];
	
	}
    else if (i==2)
    {
	 for(j=0;j<3;j++)
    c[i][j]=a[i-2][j];
}
    else{
	
     for(j=0;j<3;j++)
    c[i][j]=a[i][j];
}
}
 printf("\n modified matrix is\n");
     for(i=0;i<3;i++)
    {
        printf("\n");
     for(j=0;j<3;j++)
     printf("%d\t",c[i][j]);
    }
    
    return 0;
}


