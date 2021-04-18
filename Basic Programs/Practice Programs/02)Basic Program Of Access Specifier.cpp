#include <iostream>
using namespace std;
#include<conio.h>

//Compiler version g++ 6.3.0

class Demo
{
   private:
     int x,y;     // Private Data Members/Characteristics 
     
     void Fun_Pri()  // Private Member Function
     {
        x=40,y=90;
        cout<<"\nInside Private Member Function Fun_Pri() Of Our Class"<<endl;
        cout<<"\nValues = "<<x<<" "<<y <<endl;
     }
    
     
   public:
      int a,b;      // Public Characteristics
       
      Demo()        // Constructor Of Our Class
      {
         x=y=a=b=i=j=0;
        
         cout<<"\nInside Constructor Of Our Class..."<<endl;     
      }
      
     void Fun_Pub()    // Public Member Function
     {       
              
        cout<<"\nInside Public Member Function Fun_Pub() Of Our Class"<<endl;
        cout<<"\nValues = "<<a<<" "<<b <<endl;
        
        Fun_Pri();
        Fun_Pro();
        
     }
     
    ~Demo()         // Destructor Of Our Class
    {
      cout<<"\nInside Destructor Of Our Class..."<<endl;
    }
    
    
  protected:
     int i,j;       // Protected Characteristics
     
     void Fun_Pro()   // Protected Member Function
     {
       
       cout<<"\nInside Protected Function Fun_Pro() Of Our Class"<<endl;
       cout<<"\nValues = "<<i<<" "<<j <<endl;
       
     }
    
  
};


int main()
{
   Demo dObj;     // Creating Object Of Our Class
   
   dObj.a=10;     // Initialising Value To Public Characteristics
   dObj.b=25;
   
   //dObj.x=50;     // NOT ALLOWED Bcz x is Private Characteristic
 
   //dObj.i=40;     // NOT ALLOWED Bcz i is Protected Characteristics
   
   dObj.Fun_Pub(); 
   
  //dObj.Fun_Pri();   // NOT ALLOWED Bcz Fun_Pri() is Private Member Function
   
  //dObj.Fun_Pro();   // NOT Allowed Bcz Fun_Pro() is Protected Member Function 
   
   getch();
   return 0;
}
