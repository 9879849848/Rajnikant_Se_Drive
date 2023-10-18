//Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;
class con
{
    public:
    char s1[10],s2[10];
    con(char a1[],char a2[])
    {
        strcpy(this->s1,a1);
        strcpy(this->s2,a2);
    }
    void operator+()
    {
        cout<<strcat(s1,s2);
    }
};
int main()
{
        char a1[]="Patel";
        char a2[]="Raj";
        con obj (a1,a2);
        +obj;
        return 0;
}