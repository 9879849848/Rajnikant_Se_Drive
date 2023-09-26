#include<stdio.h>
void main ()
{
    int i,num;
    double fac=1;
    printf("Enter the values :");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("enter the velid number:");
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            fac*=i;
        }
            printf("fac of %d is %lf:",num,fac);  
    }
}