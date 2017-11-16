#include<stdio.h>
int main()
{
	
int i,t,j,x=1,a[10];
for(i=0;i<10;i++)
scanf("%d",a+i);
while(x<10)
	{
	
	for(j=x;j>=1;j--)
	{if(a[j-1]>a[j])
	{t=a[j-1];
	a[j-1]=a[j];
	a[j]=t;
	}
	else
	break;
	}
	
	
	x++;
	
	
	
	}
	for(i=0;i<10;i++)
printf("\n%d",*(a+i));
	
	return 0; 
	}
