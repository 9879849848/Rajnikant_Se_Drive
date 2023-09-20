#include<stdio.h>
void main ()
{
	int row,colum;
	for (row=0;row<=5;row++)
	{
		for (colum=0;colum<=row;colum++)
		{
			printf("%c",colum+'a');
		}
		printf("\n");
	}
		for (row=4;row>=0;row--)
	{
		for (colum=0;colum<=row;colum++)
		{
			printf("%c",colum+'a');
		}
		printf("\n");
	}
}
