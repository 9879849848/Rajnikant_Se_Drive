#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
     
    for(i=9;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
            printf("*");

        }
        printf("\n");
    }
}
