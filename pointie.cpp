#include<stdio.h>
int value(int x,int y,int *s,int *p,int *d);
main()
{
	int a=2,b=8,sum,diff,pro;
    value(a,b,&sum,&diff,&pro);	
	printf("sum=%5ddiff.=%5dproduct=%5d",sum,diff,pro);
}
int value(int x,int y,int *s,int *d,int *p)
{
	
	
	
	
	
	
	
	*p=x*y;
	*d=x-y;
	*s=x+y;
	
	
}
