#include<stdio.h>
void func(int i[],float f[],char c[]);
main()
{
	int i_arr[6]={1,2,3,4,5,6};
	float f_arr[6]={1.2,2.55,3.7,4.8,5.88,6.3};	
	char c_arr[6]={'a','b','c','d','e','f'};	
	printf("inside main\n");
	printf("\n%u",sizeof(i_arr));
		printf("\n%u",sizeof(f_arr));
			printf("\n%u",sizeof(c_arr));
	func(i_arr,f_arr,c_arr);
	
	
	}
	void func(int i[],float f[],char c[])
	{
		
			printf("inside func\n");
	printf("\n%u",sizeof(i));
		printf("\n%u",sizeof(f));
			printf("\n%u",sizeof(c));
	
		
		
		
		
	}
