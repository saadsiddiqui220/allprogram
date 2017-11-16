#include<stdio.h>
#include<stdlib.h>
#define row1 3
#define col1 4
#define col2 4
#define row2 col1
int main()

{
int i,j,k,mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];
printf("enter matrix 1 (%d*%d) elemnts row wise ",row1,col1);
for(i=0;i<row1;i++)
for(j=0;j<col1;j++)
{
scanf("%d",&mat1[i][j]);
}
printf("enter matrix 2 (%d*%d) elemnts row wise ",row2,col2);
for(i=0;i<row2;i++)
for(j=0;j<col2;j++)
{
scanf("%d",&mat2[i][j]);
}
for(i=0;i<row1;i++)
for(j=0;j<col2;j++)
{mat3[i][j]=0;
for(k=0;k<col1;k++)
mat3[i][j]+=mat1[i][k]*mat2[k][j];

}
printf("resultant product matrix mat3 row wise :\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
printf("%5d",mat3[i][j]);
printf("\n");
}

return 0;
}
