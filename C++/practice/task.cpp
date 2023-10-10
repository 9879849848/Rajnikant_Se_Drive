#include <iostream>
using namespace std;
int checkevenodd(int num[])
{
    int i;
    cout << "This is your Even Number";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i]<<"\t";
        }
    }
    cout<<endl<<"This Is your Odd number";
    for(i=0;i<10;i++)
    {
        if(num[i]%2!=0)
        {
            cout<<num[i]<<"\t";
        }
    }
    return 0;
}
int  oddsum(int num[])
{
int i,odd[10],o=0,oddtotal=0;
    for(i=0;i<10;i++)
    {
        if(num[i]%2!=0)
        {
            odd[o]=num[i];
            o++;
            oddtotal+=num[i];
        }

    }
    cout<<endl<<"Count Of odd number"<<o;
    cout<<endl<<"Sum of odd Number"<<oddtotal<<endl;
}
    
int evensum(int num[])
{
    int i,even[10],e=0,eventotal=0,t;
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            even[e]=num[i];
            e++;
            eventotal+=num[i];
        }

    }
    cout<<"Count Of even number"<<e<<endl;
    cout<<"Sum of Even Number"<<eventotal<<endl;
    
    for(i=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            cout<<"This Is your table"<<num[i]<<endl;
            for(t=1;t<=10;t++)
            {
                cout<<num[i]<<"*"<< t << "="<<num[i]* t<<endl;
            }
        }
    }

}

int main()
{
    int num[10], i;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter the number:";
        cin >> num[i];
    }
    checkevenodd(num);
    oddsum(num);
    evensum(num);
    
}
