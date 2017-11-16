
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],c[3][3],i,j;
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
    
    
     printf("modified matrix is\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
     for(j=0;j<3;j++)
     {
     	if((i+j)==1||(i+j)==3)
	 {
     printf("\t");
 
    }
    else
    {
    	printf("%d\t",a[i][j]);
	}
}
}
    
    
    return 0;
}


