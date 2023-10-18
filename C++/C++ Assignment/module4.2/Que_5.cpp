/* Write a program of Addition, Subtraction, Division, Multiplication using
constructor. */
#include <iostream>
using namespace std;
class calculator
{
public:
    calculator(double valuea, double valueb)
    {
        int choice;
        cout << "Choice Any Option" << endl;
        cout << "1.Addition" << endl;
        cout << "2.Substriction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cin >> choice;

        switch (choice)
        {
            int result;
        case 1:
            result = valuea + valueb;
            cout<<"Result is "<<result;
            break;
        case 2:
            result = valuea - valueb;
             cout<<"Result is "<<result;
            break;
        case 3:
            result = valuea * valueb;
             cout<< "Result is "<<result;
            break;
        case 4:
            result = valuea / valueb;
             cout<<"Result is "<<result;
            break;

        default:
            cout << "Invalid Input plz Choice Input is a  (1 to 4)";
            break;
        }
    }
};
int main()
{
    int a, b;
    cout << "Enter the values:";
    cin >> a >> b;
    calculator obj (a,b);
}
