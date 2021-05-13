#include<conio.h>
#include<iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Base
{
  public:
     int i,j;         // Base Class Characteristics
     
     
     Base()           // Base Class Default Constructor
     {
       cout<<"\nInside Base Class Default Constructor"<<endl;
     }
     
    ~Base()         // Base Class Destructor
    {
      cout<<"\nInside Base Class Destructor"<<endl;
    }
    
    virtual void Fun()
    {
      cout<<"\nInside Base::Fun()"<<endl;
    }
  
   virtual void Gun()
    {
      cout<<"\nInside Base::Gun()"<<endl;
    }
  
    void Sun()
    {
      cout<<"\nInside Base::Sun()"<<endl;
    }  
  
  
};

class Derived : public Base
{
  public:
    int i,x,y;        // Redefining i Characteristic
  
  
     Derived()         // Derived Class Default Constructor
     {
       cout<<"\nInside Derived Class Default Constructor"<<endl;
     }
     
    ~Derived()         // Derived Class Destructor
    {
      cout<<"\nInside Derived Class Destructor"<<endl;
    }
    
    void Fun()          // Overriding
    {
      cout<<"\nInside Derived::Fun()"<<endl;
    }
    
    virtual void Gun()
    {
      cout<<"\nInside Derived::Gun()"<<endl;
    }
    
    void Sun()         // Redefining Member Function/Behaviour
    {
      cout<<"\nInside Derived::Sun()"<<endl;
    }
    
};


int main()
{
   Base bObj;
   Derived dObj;
   
  Base *bPtr=&dObj;         // Upcasting : Base Class Pointer Points To Derived Class Object
  
  getch();
  return 0;
}