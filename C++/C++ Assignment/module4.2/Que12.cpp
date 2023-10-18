/* Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
 Rectangle: Area * breadth
 Triangle: ½ *Area* breadth
 Circle: Pi * Area * Area */
#include<iostream>
using namespace std;
const double pi=3.14;
class con
{
    public:
    double circle(double r)
    {
    return pi*r*r;
    }
     double circle(double r,double breadth)
    {
    return 0.5*r*breadth;
    }
     double circle(int r,int breadth)
    {
    return r*breadth;
    }
};
int main()
{
        double cir,tri,rect;
        con obj;
        cir=obj.circle(2);
        cout<<"Circle of"<<cir<<endl;
        tri=obj.circle(5,3);
        cout<<"Triangle of"<<tri<<endl;
        rect=obj.circle(5,4);
        cout<<"Rectangle of"<<rect;
}