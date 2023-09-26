#include<stdio.h>
void fun()
{
    int arr[]={12,22,98,32,42,},i,max;
    max=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("maximum num is a:%d",max);
}
 int main()
{
    fun();
}