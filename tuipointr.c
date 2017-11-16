#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*q;
	int x=45,y=57;
	p=&x;
	q=&y;
	printf("%d\t%d\t%d\t%d\t%u\t%u",x,y,*p,*q,&x,p);
	
	
	
	
	
	
	
	
	
	return 0;
}
