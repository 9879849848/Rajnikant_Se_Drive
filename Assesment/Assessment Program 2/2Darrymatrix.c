//Write a program to make multiplication of 2-D Matrix
#include <stdio.h>
void main()
{
    int i, j, arr[2][2], arr2[2][2], result[2][2],k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Your First Arr:[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j= 0; j < 2; j++)
        {
            printf("Enter Your Second Arr:[%d][%d]", i, j);     
            scanf("%d", &arr2[i][j]);
        }

    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                result[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}