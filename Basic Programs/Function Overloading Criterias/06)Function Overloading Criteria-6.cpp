// Constant Behaviour Is Applicable But For Calling Constant Behaviour We Need To Create An Constant Characteristic 

#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Demo
{
  public:
     
      Demo()        // Default Constructor
      {
         cout<<"\nInside Default Constructor"<<endl;   
      }
      
     ~Demo()       // Destructor
      {
         cout<<"\nInside Destructor"<<endl;
      }
      
     void Fun(char Ch)     
      {
        cout<<"\n>>Ch as char is = "<<Ch<<endl;
      } 
  
     void Fun(int N1) const
      {       
        cout<<"\n>>N1 as integer is = "<<N1<<endl;
      }
};

int main()
{
    Demo Obj1;
    const Demo Obj2;
    
    Obj1.Fun('A');      
    Obj2.Fun(100);          
      
    cout<<"\nBack To Main()..."<<endl;
    
    getch();
    return 0;
}