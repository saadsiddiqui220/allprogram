#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	
	struct account
	{
		int balance;
		char name[15];
		unsigned number;
	}a[5];

for(i=0;i<5;i++)	
{
scanf("%d%s%u",&a[i].balance,a[i].name,&a[i].number);
}
for(i=0;i<5;i++)	
{
printf("\ntotal balance:%d\tname:%s\tacc no:%u\n",a[i].balance,a[i].name,a[i].number);
}
return 0;
}
