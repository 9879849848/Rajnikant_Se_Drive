#include<stdio.h>
void main()
{
    int i,num,s1=0,s2=1,s3;
    printf("Enter the values:");
    scanf("%d",&num);
    printf("%d%d",s1,s2);
    for(i=2;i<num;i++)
    {
     s3=s1+s2;
     printf("%d",s3);
        s1=s2;
        s2=s3;
    }

}