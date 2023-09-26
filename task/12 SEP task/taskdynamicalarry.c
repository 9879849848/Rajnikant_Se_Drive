#include<stdio.h>
void main()
{
	int arr[3][3],i,j,arr1[3][3],sum[3][3];
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the first values [%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
			}	
	}
		for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the second values [%d][%d]:",i,j);
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
   printf("matrix 1 and 2 addition \n");
   for (i=0;i<3; i++)
   {
    for (j=0;j<3;j++)
    {
        sum[i][j]=arr[i][j]+arr1[i][j];
        printf("%d",sum [i][j]);
    }
    printf("\n");  
   }
   
}
