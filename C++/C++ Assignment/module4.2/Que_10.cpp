/* Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include<iostream>
using namespace std;
class matrix
{
    int a[1];
    public:
    void accept();
    void display();
    void operator+ (matrix x);
};
void matrix::accept();
{
    int i,j;
    cout<<"\n enter Matrix element (1*1):\n";
}