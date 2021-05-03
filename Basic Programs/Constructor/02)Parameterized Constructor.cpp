#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Product
{
  public:
     int N1,N2;       // Data Members Or Characteristics
     
     Product()       // Default Constructor
     {
       N1=N2=0;
       cout<<"\nInside Default Constructor"<<endl;
     }
     
     Product(int Value1,int Value2)     // Parameterized Constructor
     {
       N1=Value1;
       N2=Value2;
       
       cout<<"\nInside Parameterized Constructor"<<endl;
     }
     
    ~Product()      // Destructor
     {
       cout<<"\nInside Destructor"<<endl;
     }
};


int main()
{
  
   Product P1;
   
   cout<<"\n**********************************\n";
   
   cout<<"\nValues N1 = "<<P1.N1<<" N2 = "<<P1.N2<<endl;
   
   Product P2(100,200);
   
   cout<<"\nValues N1 = "<<P2.N1<<" N2 = "<<P2.N2<<endl;
   
   cout<<"\n**********************************"<<endl;
   
   getch();
   return 0;
   
}