#include<stdio.h>
void main()
{
	int i,j[100],k,num;
	printf("How many table do you want to print:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter the table number:\n");
		scanf("%d",&j[i]);
		printf("\n");	
	}
	printf("This is your tables:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t\n:",j[i]); 
	}
	for(i=0;i<num;i++)
	{
		for(k=1;k<=10;k++)
		printf("%d*%d=%d\n",j[i],k,k*j[i]);
	}
	
}