/*Que number:-5
2. WAP to take 10 no. Input from user and find out �
3. How many Even numbers are there
4. How many odd numbers are there
5. Sum of even numbers
6. Sum of odd numbers*/

#include<stdio.h>
void main ()
{
	int num,even=0,odd=0,even_total,odd_total,i;
	for (num=0;num<=10;num++)
	{
		printf("Enter the 10 number:");
		scanf("%d",&num);
	}
	for (i=1;i<=num;i++)
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
	printf("this is a odd_total total number:%d\n",odd_total);
}
