/* Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance) */
#include<iostream>
using namespace std;
class student 
{
    public:
    int rollno;
    void studentrollno()
    {
        cout<<"Enter the Student roll number:";
        cin>>rollno;
    }
};
class test :public student
{
    public:
    int sub1,sub2;
    void marks()
    {
        cout<<"Enter the student mark:";
        cin>>sub1>>sub2;
    }
  
};
class result : public test
{
    public:
    int res;
      void total()
    {
        res=sub1+sub2;
        cout<<"Student result"<<res;
    }
};
int main ()
{

    result obj;
    obj.studentrollno();
    obj.marks();
    obj.total();

}