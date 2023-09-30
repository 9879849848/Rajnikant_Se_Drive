#include<stdio.h>
main ()
{
	int choice;
	double year,days;
	printf("choice any Option (1/2) \n:");
	printf("convert year to days :");
	printf("convert days to year :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		printf("enter the number of year :");
		scanf("%lf",&year);
		days=year*365.25;
		printf("%.2lf year is approximately %.2lf days.\n",year,days);
		break;
		case 2:
		printf("enter the number of days :");
		scanf("%lf",&days);
		year=days/365.25;
		printf("%.2lf days is approximately %.2lf year.\n",days,year);
		break;
		default:
		
		printf("invalid choice.plz select 1 or 2\n");
		
	}
}
