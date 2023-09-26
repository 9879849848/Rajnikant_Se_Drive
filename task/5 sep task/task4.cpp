#include<stdio.h>
main ()
{
	int row,colum;
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
}

