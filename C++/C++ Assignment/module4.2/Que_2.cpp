/* Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account 
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include<iostream>
using namespace std;
class bank
{
    private:
    string depositor,type;
    int acountno,balance;
    public:
    void assign (string name,int acno,string actype, int bal)
    {
        depositor=name;
        acountno=acno;
        type=actype;
        balance=bal;
    }
    void deposited (int amount)
    {
        if (amount>0)
        {
            balance+=amount;
            cout<<"Diposite sucssesfully"<<amount<<endl;
        }
    }
    void withdraw (int amount)
    {
        if( amount>0 && amount<=balance)
        {
          balance-=amount;
          cout<<"withdraw complate"<<amount<<endl;
        }
        else
        {
            cout<<"Insufficient balance"<<endl;
        }
    }
    void display()
    {
        cout<<"Name of Dipositor"<<depositor<<endl;
        cout<<"Acount number"<<acountno<<endl;
        cout<<"Type of acount"<<type<<endl;
        cout<<"Balance amount"<<balance<<endl;

    }


};
int main ()
{
    bank obj;
    obj.assign("Patel Raj",987,"Saving",1000);
    obj.display();
    obj.deposited(1000);
    obj.withdraw(500);
    obj.display();
}