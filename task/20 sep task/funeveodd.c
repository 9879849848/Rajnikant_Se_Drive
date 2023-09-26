#include <stdio.h>
void checkevenodd(int num[])
{
	int i;
    for (i = 1; i <=10; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d Even\n", num[i]);
        }
        else
        {
            printf("%d Odd\n", num[i]);
        }
    }
}
void count(int num[])
{
    int even[10], odd[10],i, j=0, r=0;
    for (i = 1; i <= 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            num[j] = num[i];
            j++;
        }
        else
        {
            num[r] = num[i];
            r++;
        }
    }
    printf("Even number is %d\n", j);
    printf("Odd number is %d\n", r);
}
void sum(int num [])
{
    int i,even_total=0,odd_total=0;
    for(i=1;i<=10;i++)
    {
        if(num[i]%2==0)
        {
            even_total+=num[i];
        }
		else
        {
            odd_total+=num[i];
        }
    }
    printf("Even number total is:%d\n",even_total);
    printf("odd number total is:%d\n",odd_total);
}

void main()
{

    int num[10],i;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the values:");
        scanf("%d",&num[i]);
        
    }
    checkevenodd(num);
    sum(num);
    count(num);
    
    
    
}

