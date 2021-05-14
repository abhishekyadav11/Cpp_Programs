#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Product
{
   public:
     int a,b;
     const int i;             // Constant Characteristics
     
     Product():i(23),b(15)           // Constant & Non Constant Characteristic Initialisation Using Member Initialisation List
     {
       a=10;
       
       cout<<"\nInside Default Constructor"<<endl;
    
       cout<<"\nValues : a = "<< a <<" b= "<< b <<" i = "<< i <<endl;
       
     }
   
   void Fun()
   {
     cout<<"\nInside Fun() Function"<<endl;
     
     a=50;
     b=78;
 //  i=100;                NOT ALLOWED
     
     cout<<"\nValues : a = "<< a <<" b= "<< b <<" i = "<< i <<endl;
   
   }
   
   ~Product()
   {
      cout<<"\nInside Destructor"<<endl;
   }
   
};


int main()
{
    Product pObj;
    
    pObj.Fun();
    
    cout<<"\nBack To main()..."<<endl;
    
    getch();
    return 0;
}