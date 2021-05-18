#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Base
{
   public:
      int Sum;
      
      Base(int N1,int N2)
      {
        cout<<"\nInside Base Class Parameterized Constructor"<<endl;
       
        Sum=N1+N2;
        
        cout<<"\nSummation = "<<Sum<<endl;
      }
    
     ~Base()
     {
       cout<<"\nInside Base Class Destructor"<<endl;
     }
};

class Derived : public Base
{
   public:
     
   /*
    // This gives error because we don't provide any default Constructor of base class. 
    //Derived class is derive from base class so that's why compiler firstly goes to Base class Constructor 
    //if the Constructor is Not Available/Not Found then it gives error.
    
     Derived() 
     {
       cout<<"\nInside Derived Class Constructor"<<endl;
     }
     
   */
     
     Derived() : Base(40,60)        // Calling Parameterized Constructor Of Base Class Using Member Initialisation List
     {
       cout<<"\nInside Derived Class Constructor"<<endl;
     }
     
    ~Derived()
    {
       cout<<"\nInside Derived Class Destructor"<<endl;
    }
  
};


int main()
{
    Derived dObj;
    
    cout<<"\nBack To main()...!"<<endl;
    
    getch();
    return 0;
}