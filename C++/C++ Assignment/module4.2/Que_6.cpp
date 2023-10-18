/* Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */

#include<iostream>
using namespace std;
class crickter
{
    protected:
    string name;
    int age;
    public:
    void datamember()
    {
        cout<<"Enter The batsman name:";
        cin>>name;
        cout<<"Enter the batsman age:";
        cin>>age;
    }
};
class batsman : public crickter
{
    int run,performance;
    double average;
    public:

    void batsmandata()
    {
        
        datamember();
        cout<<"Enter the batsman run:";
        cin>>run;
        cout<<"Enter the batsman performance:";
        cin>>performance;

    } 
    void bataverage()
    {
    int matchplayed;
    cout<<"Enter the matchplayed";
    cin>>matchplayed;
    average=run/matchplayed;
    }
    void displaydata()
    {
        cout<<"Cricketer name:"<<name<<endl;
        cout<<"Crickter Age:"<<age<<endl;
        cout<<"Total runs:"<<run<<endl;
        cout<<"Average run"<<average<<endl;
        cout<<"Best performance"<<performance<<endl;   
    }
};
int main ()
{
    batsman obj;
    
    obj.batsmandata();
    obj.bataverage();
    obj.displaydata();
    return 0;
}