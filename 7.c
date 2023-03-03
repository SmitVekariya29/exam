#include<stdio.h>
 #include<string.h>
void main()
{
	char arr[]="HELLO";
	
	int len=strlen(arr);
	int i,j;
	
	for(i=0; i<len; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%c ",arr[j]);
		}	
		printf("\n");
	}
}