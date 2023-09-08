#include<stdio.h>
void main ()
{
	int arr[10],i,even_total=0,odd_total=0,even=0,odd=0;
	printf("Enter the values of arr\n");
	for(i=0;i<10;i++)
	{
		printf("Enter the value :",i);
		scanf("%d",&arr[i]);
	}
		printf("this is your arr values");
		for(i=0;i<10;i++)
	{
		printf("%d \n",arr[i]);
	}
	for(i=0;i<10;i++)
	if(arr[i]%2==0)
	{
		even++;
		even_total+= arr[i];
		printf("even number %d :\n",arr[i]);
	}
	for(i=0;i<10;i++)
	if(arr[i]%2!=0)
	{
		odd++;
		odd_total+= arr[i];
		printf("odd number %d :\n",arr[i]);	
	/*else 
	{
	 odd++;
	 odd_total+=arr[i];
	 printf("%d Odd :",arr[i]);*/
	}
	printf("This is total of even %d \n ",even);
	printf("This is total of odd %d \n ",odd);
	printf("you got this much j of even number in your loops %d\n",even_total);
	printf("you got this much j of odd number in your loops %d\n",odd_total); 
}
