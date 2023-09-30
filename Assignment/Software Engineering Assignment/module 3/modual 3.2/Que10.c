/* Write a program to find out the max from given number (E.g., No: -1562
Max number is 6) */
#include<stdio.h>
void main ()
{
	int num,digit,maxdigit;
	printf("Enter your values:");
	scanf("%d",&num);
	while (num!=0){
		digit=num%10;
		if(digit>maxdigit)
		{
			
			maxdigit=digit;
		}
		num/=10;
      }
      printf("Maximum digit is :%d",maxdigit);
}
