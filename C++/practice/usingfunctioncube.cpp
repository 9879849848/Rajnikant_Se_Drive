/* Write a program to find the multiplication values and the cubic values using
 function */

#include<iostream>
using namespace std;
int cube (int r);
int main()
{
    int a,c,r;
    c=cube(r);
    cout<<"c is "<<c;
    
}
 int cube (int r)
{
   int c,num;
   cout<<"Enter the Values:";
    cin>>num;
   c=num*num*num;
   return (c);

}