//WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i,num;
	double fac=1;
	printf("Enter the positive Number for factorial:");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("Please input valid number:");
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			fac*=i;
		}printf("The Factorial of %d is %lf",num,fac);
	}
}
