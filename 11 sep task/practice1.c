#include<stdio.h>
void main ()
{
    int i,number;
    printf("how many table do you want print:");
    scanf("%d",&i);
    for(number=0;number<=i;number++)
    {
        printf("Enter the table number:\n");
        scanf("%d",&number);
    }
}
