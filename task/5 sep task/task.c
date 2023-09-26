#include<stdio.h>
main ()
{
	int row,colum;
	for (row=0;row<=4;row++)
	{
		for (row=0;colum<=row;colum++)
		{
			printf("%c",row+'a');	
		}
		{
			printf("\n");
		}
	}
}
	
	/*printf("\n");
	for (row=0;row<=4;row++)
	{
		for (colum=0;colum<=row;colum++)
		{
			printf("%c",colum+'a');
			
		}
		{
			printf("\n");
		}
	}
		printf("\n");
	for (row=1;row<=5;row++)
	{
		for (colum=0;colum<=row;colum++)
		{
			printf("%d",colum%2==1);
			
		}
		{
			printf("\n");
		}
	}
	
	
	
	printf("\n");
		for (row=0;row<=5;row++)
	{
		for (colum=0;colum<=5;colum++)
		
		if(row==5-colum)
		{
			printf("$");
		}
		else
		{
				printf("*");
		}
		printf("\n");
	}
	
	
	printf("\n");
    for (row=0;row<=5;row++)
	{
		for (colum=0;colum<=5;colum++)
		
		if(row==5-colum)
		{
			printf("$");
		}
		else
		{
				printf("*");
		}
		printf("\n");
	}
}*/


