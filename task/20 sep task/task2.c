#include<stdio.h>
void main ()
{
	int num[10],i,j;
	for(i=0;i<10;i++)
	{
	printf("Enter the number:");
	scanf("%d",&num[i]);
	}
	for (i=0;i<10;i++) 
	{
		printf("This is your Array values:%d\n",num[i]);
	}
}


