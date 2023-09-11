#include<stdio.h>
void main ()
{
	int num,even=0,odd=0,even_total,odd_total;
	for (num=0;num<=10;num++)
	{
		printf("Enter the 10 number:");
		scanf("%d",&num);
	}
	for (num=1;num<=10;num++)
	if (num%2==0)
	{
		even++;
		even_total+=num;
	}
	else
	{
		odd++;
		odd_total+=num;
	}
	printf("this is a even number:%d\n",even);
	printf("this is a odd number:%d\n",odd);
	printf("this is a even_total total number:%d\n",even_total);
	printf("this is a odd_total number:%d\n",odd_total);
}
