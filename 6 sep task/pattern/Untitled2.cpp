#include<stdio.h>
 main ()
{
	int row,colum;
	for(row=0;row<=5;row++)
	{
		for(colum=0;colum<=row;colum++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(row=5;row>=0;row--)
	{
		for(colum=1;colum<=row;colum++)
		{
			printf("*");
		}
		printf("\n");
	}
}
