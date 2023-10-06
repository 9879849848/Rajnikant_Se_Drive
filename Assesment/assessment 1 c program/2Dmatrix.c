#include<stdio.h>
void main ()
{
    int arr[2][2],arr1[2][2],i,j,k,result[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
         printf("Enter your First Arr");
         scanf("%d",&arr[i][j]);
        }
       
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter Your Second Arr");
            scanf("%d",&arr1[i][j]);
        }
    }
    }
   /*  for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
             result[i][j]+=arr[i][k] * arr1[k][j];
        } */
    /* }
    } */
}