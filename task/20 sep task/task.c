#include<stdio.h>
void main ()
{
	int num;
	printf("Enter the values:");
	scanf("%d",&num);
    pattern(num);
    
}
void pattern(int num)
{
	int i,j;
	for ( i=0;i<num;i++)
	{
		for( j=0;j<=i;j++)
		{
		printf("*");
	}
		printf("\n");
	}

}
		
		
