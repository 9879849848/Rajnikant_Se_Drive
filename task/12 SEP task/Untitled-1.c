#include<stdio.h>
void main()
{
	int arr[3][3],i,j,arr1[3][3];
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the values [%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
			}	
	}
		for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the values [%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
			}	
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
		{
			printf("%d",arr[i][j]);
			
			}
			{	
			printf("\n");
			}
	 }
	printf("\n-------------------------matrix 2-------------------------------\n");
	
		for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)	
		{
			printf("%d",arr1[i][j]);
		}	
			printf("\n");
	}
}
