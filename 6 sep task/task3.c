#include<stdio.h>
main ()
{
	int row,colum;
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
}
