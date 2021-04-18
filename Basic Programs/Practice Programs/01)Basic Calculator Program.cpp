#include <iostream>
using namespace std;
#include<conio.h>

//Compiler version g++ 6.3.0

class Calculator
{
  public:
    int No1,No2,Ans;     // Data Members/Characteristics Of Our Class
   
    Calculator();       //  Default Constructor Of Our Class
  
    Calculator(int,int);   // Parametrised Constructor Of Our Class
  
    void Add();         //  Member Function/Behaviour Of Our Class

    void Sub();         //   Member Function Of Our Class

    ~Calculator();       //  Destructor Of Our Class

};


Calculator:: Calculator()  //Definition Of Constructor
{
   
   cout<<"\nInside Default Constructor Of Our Class"<<endl;
   
   No1=No2=Ans=0;  
  
}


Calculator:: Calculator(int N1,int N2)   //Definition Of Parameterized Constructor
{
  
   cout<<"\nInside Parameterized Constructor Of Our Class\n";
   
      No1=N1;
      No2=N2;
      Ans=0;
  
}


Calculator:: ~Calculator()
{
  
   cout<<"\nInside Destructor Of Our Class\n";
  
}


void Calculator::Add()
{
  
   Ans=No1+No2;
  
}


void Calculator::Sub()
{
  
   Ans=No1-No2;
  
}


int main()
{
    Calculator Obj1;
     
    Obj1.No1=10;
    Obj1.No2=20;
    
    Obj1.Add();
     
    cout <<"\nAddition is = "<<Obj1.Ans <<endl;
    
    getch();
    
    Calculator Obj2(100,45);
    
    Obj2.Sub();
    
    cout<<"\nSubstraction is = "<<Obj2.Ans <<endl;
    
    getch();
    return 0;
}
