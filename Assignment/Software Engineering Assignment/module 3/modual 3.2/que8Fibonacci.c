//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
void main()
{
	int i,j=0,k=1,l=0,m=0;
	printf("Enter the number you want to get fibonascci value:");
	scanf("%d",&m);
	printf("%d\t%d\t",j,k);
	for(i=2;i<m;++i)
	{
		l=j+k;
		printf("%d\t",l);
		
		j=k;
		k=l;
	}
	/*
	int i,c,num,a=0,b=1;
	printf("Enter Any value:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{	
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	*/
}
