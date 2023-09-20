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
