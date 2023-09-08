#include<stdio.h>
main ()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	(num%2==0)?
	printf("%d is even .\n",num):printf("%d is odd.\n",num);
	return 0;
}
