// WAP to create simple calculator using class
#include <iostream>
using namespace std;
class calculator
{
public:
    double a, b, result;
    void input()
    {
        cout << "Enter the any value A and b:";
        cin >> a >> b;
    }
    void calculation()
    {
        int choice;
        cout << "Choice Any option"<<endl
             << "1.Additon" << endl
             << "2.Sub" << endl
             << "3.Multiplication" << endl
             << "4.Division" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            result = a + b;
            cout << "Sum of A and b:" << result<<endl;
            break;
        case 2:
            result = a - b;
            break;
            cout << "Sub of A And B:" << result<<endl;
        case 3:
            result = a * b;
            cout << "Multiplication of A and b:" << result<<endl;
        case 4:
            result = a / b;
            cout << "Division of A and B:" << result<<endl;
        default:
            cout << "Invalid Input Choice Option of(1 to 4) ";
            break;
        }
    }
};
int main()
{
    calculator obj;
    obj.input();
    obj.calculation();
    
}