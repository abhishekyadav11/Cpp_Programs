#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Arith
{
   public:
     
     Arith()
     {
       cout<<"\nInside Arith Class Constructor"<<endl;
     }
  
   ~Arith()
    {
      cout<<"\nInside Arith Class Destructor"<<endl;
    }
    
   void Operate(int,int);
};


class Calculator
{
  private:
    int Sum;
    
    void Addition()
    {
       Sum=N1+N2;
    }
  
  protected:
     int Sub;
     
     void Subtraction()
     {
        Sub=N1-N2;
     }
  
  public:
     int N1,N2;
     
     Calculator()
     {
        N1=N2=Sum=Sub=0;
        
        cout<<"\nInside Calculator Class Constructor"<<endl;
     }
     
    ~Calculator()
     {
       cout<<"\nInside Calculator Class Destructor"<<endl;
     }
     
     friend void Arith::Operate(int,int);
};


void Arith :: Operate(int Num1,int Num2)
{
   Calculator Obj;
   
   Obj.N1=Num1;
   Obj.N2=Num2;
   
   Obj.Addition();
   
   cout<<"\n>>Summation Of 2 Numbers is = "<<Obj.Sum <<endl;
   
   Obj.Subtraction();
   
   cout<<"\n>>Subtraction Of 2 Numbers is = "<<Obj.Sub <<endl;
     
}


int main()
{
   int No1=0,No2=0;
   
   cout<<"\nEnter Two Numbers : ";
   cin>>No1>>No2;
   
   Arith A_Obj;
   
   A_Obj.Operate(No1,No2);
   
   getch();
   return 0;
}