/* Write a program to swap the two numbers using friend function without
using third variable   */
#include<iostream>
using namespace std;
class swapnumber
{
    private:
    int value1,value2;
    public:
    swapnumber(int a , int b) : value1(a),value2 (b) {}
    friend void raj(swapnumber &obj);
    void display()
    {
        cout<<"Number After Swaping"<<value1<<"  "<<value2;
    }
};
    void raj(swapnumber &obj) 
    {
        obj.value1=obj.value1+obj.value2;
        obj.value2=obj.value1-obj.value2;
        obj.value1=obj.value1-obj.value2;
    }

    
int main()
{
    int value1,value2;
    cout<<"Enter the Values:";
    cin>>value1>>value2;
   swapnumber obj (value1,value2);
    raj(obj);
    obj.display();
}