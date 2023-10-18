/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */
#include<iostream>
using namespace std;
class calculator 
{
    public:
    void addition(int a, int b)
    {
        cout<<"This is your Addition"<<a+b<<endl;

    }
    void addition(double a,double b)
    {
        cout<<"This is your Addition"<<a+b<<endl;
    }
    void substrction(int a, int b)
    {
        cout<<"This is your Addition"<<a-b<<endl;

    }
    void substrction(double a,double b)
    {
        cout<<"This is your Addition"<<a-b<<endl;
    }
     void multiplication(int a, int b)
    {
        cout<<"This is your Addition"<<a*b<<endl;

    }
    void multiplication(double a,double b)
    {
        cout<<"This is your Addition"<<a*b<<endl;
    }
      void division(int a, int b)
    {
        cout<<"This is your Addition"<<a/b<<endl;

    }
    void division(double a,double b)
    {
        cout<<"This is your Addition"<<a/b<<endl;
    }
};
int main()
{
    calculator obj;
    obj.addition(10,10);
    obj.addition(10.2,10.2);
    obj.substrction(20,10);
    obj.substrction(20.8,20.4);
    obj.multiplication(5,2);
    obj.multiplication(5.2,2.2);
    obj.division(10,2);
    obj.division(20.4,2.2);
}