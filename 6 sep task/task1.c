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
