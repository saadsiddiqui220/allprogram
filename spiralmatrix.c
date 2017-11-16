#include<stdio.h>

main()
{
	int i,j,m,n,row,col,arr[10][10]={0};
           printf("enter the size of array");
              scanf("%d%d",&row,&col);
	           m=row-1;n=col-1;
                      for(i=0;i<row;i++)
					  for(j=0;j<col;j++)
	
		arr[i][j]=(i+1)*(j+1);					  
					  
		      for(i=0;i<row;i++)
{
		printf("\n");
	for(j=0;j<col;j++)
	printf("%5d",arr[i][j]);
		}
	int x=0,y=1;
	do
{       
        for(j=x,i=x;j<=n-x;j++)
	printf("\n%5d",arr[i][j]);
	
	for(i=y,j=n-x;i<=m-x;i++)
	printf("\n%5d",arr[i][j]);
	
	for(j=n-y,i=m-x;j>=x;j--)
	printf("\n%5d",arr[i][j]);
	
	for(i=m-y,j=x;i>=y;i--)
	printf("\n%5d",arr[i][j]);
	
	
	
                  x++;
                  y++;
}
while(x<=((n+2)/2)&&y<=((m+2)/2));
if(row%2==0)
printf("\n%d",a[])	
	
	
	
	
}
