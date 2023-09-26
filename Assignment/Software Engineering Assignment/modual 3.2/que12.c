#include<stdio.h>
void main ()
{
    int last_digit,first_digit,num,sum;
    printf("Enter the Values:");
    scanf("%d",&num);
    last_digit=num%10;
    while (num>=10)
    {
       num/=10;
    }
    first_digit=num;
    sum=first_digit+last_digit;
    printf("sum of First digit and Last digit:%d",sum);

}