#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	
	char str[25],str1[11],str2[11];
	gets(str1);
	puts(str1);
	gets(str2);
	puts(str2);
	
if(strcmp(str1,str2)==0)
printf("both the strings are equal");


else if(strcmp(str1,str2)>0)
printf("%s is greater than %s",str1,str2);

else
{

printf("%s is greater than %s",str2,str1);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
