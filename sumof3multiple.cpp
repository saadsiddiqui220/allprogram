
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],c[3][3],i,j,sum;
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
    
     for(j=0;j<3;j++)
     {
     	if((a[i][j]%3)==0)
	 {
     sum=sum+a[i][j];
 
    }
   
}
}
printf("sum req. %d",sum);
    
    return 0;


}
