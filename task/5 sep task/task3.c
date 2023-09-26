#include<stdio.h>
main ()
{
	int row,colum;
	for (row=1;row<=10;row++)
	{
		for (colum=1;colum<=row;colum++)
		{
			printf("%d",colum);
		}
		{
			printf("\n");
		}
	}
}
