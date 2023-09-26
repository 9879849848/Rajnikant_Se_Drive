#include<stdio.h>
main ()
{
	int row,colum;
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
}
