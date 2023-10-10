#include<iostream>
using namespace std;
class library{
    public: 
    int price,page;
     string name,author,publication;
  
    void All(string bookname,string authorname,int bookpages,int Bookprice,string PublicationName)
    {
        this->name=bookname;
        this->author=authorname;
        this->page= bookpages;
        this->price=Bookprice;
        this->publication=PublicationName;
    }
};
   
int main()
{
    library obj;
    obj.All ("Cricket","Bcci",100,250,"Atul");
    cout<<"Book Name  "<< obj.name<<endl;
    cout<<"Author  "<< obj.author<<endl;
    cout<<"pages  "<< obj.page<<endl;
    cout<<"Price  "<< obj.price<<endl;
    cout<<"Publication  "<< obj.publication<<endl;
}