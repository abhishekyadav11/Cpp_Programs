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
       cout<<"\nInside Member Function Fun() Of Our Class"<<endl;
     }       
     
     
    ~India()              // Destructor
     {
       cout<<"\nInside Destructor Of Our Class"<<endl;
     }
};

int India :: N2 = 20;

int main()
{
   India Obj1,Obj2;
   India Obj3(15);
   
   cout<<"\nObject Values : "<<Obj1.N1<<" "<<Obj1.N2 <<endl;

   //Obj2.Fun();
   
   cout<<"\nObject Values : "<<Obj2.N1<<" "<<Obj2.N2 <<endl;

   getch();
   return 0;
}