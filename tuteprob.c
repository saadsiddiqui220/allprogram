#include<stdio.h>

main()
{
	int i,j,arr[10][10]={1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,10,21,22,33,44,55};
	for(i=0;i<5;i++)
{
		printf("\n");
	for(j=0;j<5;j++)
	printf("%5d",arr[i][j]);
		}
	
	while(i=4)
	{
	for(j=3;j>=0;j--)	
	{
	printf("%5d",arr[i][j]);
	if(j==0)
	break;}	
	}
	
	
	
	
	
	
}
