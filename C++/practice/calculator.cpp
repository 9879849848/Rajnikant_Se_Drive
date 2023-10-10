#include <iostream>
using namespace std;
class calculator
{
public:
    calculator(double vala, double valb)
    {
        int choise;
        cout << "choise any opration"<<endl<<"1.Addition"<<endl<<"2.subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            int result = vala + valb;
            cout << "sum of vala and valb:" << result;
            break;
        }
         case 2:
         {
            int result = vala - valb;
            cout << "sub of vala and valb:" << result;
            break;
         }
         case 3:
         {
            int result = vala * valb;
            cout << "mul of vala and valb: " << result;
            break;
         }
         case 4:
         {
            double result = vala / valb;
            cout << "div of vala and valb:" << result;
            break;
         }
            default:
            cout<<"Invalid choise.....";
            break;
        }
    }
};
int main()
{
    double vala, valb;
    cout << "Enter The val A And B";
    cin >> vala >> valb;
    calculator obj(vala, valb);
}