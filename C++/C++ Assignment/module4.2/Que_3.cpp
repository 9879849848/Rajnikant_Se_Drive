#include<iostream>
using namespace std;

inline int multiply (int num1,int num2)
{
    return num1*num2;

}
inline int cub (int num3)
{
    return num3*num3*num3;
}
int main ()
{
    int num1,num2,num3,multiplication,cube;   
    cout<<"Enter the value for multiplication of num1 and num2:"<<endl;
    cin>>num1>>num2;
    multiplication=multiply(num1,num2);
    cout<<"Multiplication of num1 And num2"<<  multiplication<<endl;
    cout<<"Enter the value for cube:";
    cin>>num3;
    cube=cub(num3);
    cout<<"Cub=:"<<cube;
}
