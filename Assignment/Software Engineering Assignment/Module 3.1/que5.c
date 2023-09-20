#include<stdio.h>
main ()
{
	int year;
	printf("Enter the Year");
	scanf("%d",&year);
	if(year%400==0 || year%4==0 && year%100!=0)
	{
		printf("this year Is leap Year :");
	} 
	else
	{
		printf("This year is a base year :");
	}
	
}
