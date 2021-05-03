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
     
    ~Product()      // Destructor
     {
       cout<<"\nInside Destructor"<<endl;
     }
};


int main()
{
  
   Product P;
   
   cout<<"\n**********************************\n";
   
   cout<<"\nValues N1 = "<<P.N1<<" N2 = "<<P.N2<<endl;
   
   P.N1=20; 
   P.N2=50;
   
   cout<<"\nValues N1 = "<<P.N1<<" N2 = "<<P.N2<<endl;
   
   cout<<"\n**********************************"<<endl;
   
   getch();
   return 0;
}