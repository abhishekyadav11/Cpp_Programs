#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0


class India
{
  public:
      int N1;
      float F1;
           
      static int N2;
      
      India()            // Default Constructor
      {
        N1=N2=0;
        F1=100;
        
        cout<<"\nInside Constructor Of Our Class"<<endl;
      }
  
     India(int X)        // Parameterized Constructor
     {
       N1=10*X;
       N2=100+X;
       
       cout<<"\nInside Parameterized Constructor"<<endl;
     }
     
     void Fun()            // Member Function
     {
       N1=55;
       N2=21;
       F1=55.65;
       
       cout<<"\nInside Member Function Fun() Of Our Class"<<endl;
     }       
     
     static void Zero_Out()         //Static Member Function
     {
       //N1=0;
         N2=0;
       //F1=0.0;
       
       
     }
     
    ~India()              // Destructor
     {
       cout<<"\nInside Destructor Of Our Class"<<endl;
     }
};

int India :: N2 = 50;

int main()
{
   cout<<"\nValue Of Class Variable: "<<India::N2 <<endl;
   
   India::Zero_Out();
   
   cout<<"\nNew Value Of Class Variable : "<<India::N2 <<endl;

   India Obj1;
   
   cout<<"\nObject Values : "<<Obj1.N1<<" "<<Obj1.N2<<" "<<Obj1.F1 <<endl;

   Obj1.Fun();
   
   cout<<"\nObject Values : "<<Obj1.N1<<" "<<Obj1.N2<<" "<<Obj1.F1 <<endl;
   
   Obj1.Zero_Out();
   
   cout<<"\nObject Values : "<<Obj1.N1<<" "<<Obj1.N2<<" "<<Obj1.F1 <<endl;
   
   getch();
   return 0;
}