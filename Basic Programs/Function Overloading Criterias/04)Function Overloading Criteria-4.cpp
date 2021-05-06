// Same Function Name But Different Type Of Arguments With Explicit Conversion

#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Demo
{
  public:
     
      Demo()        // Default Constructor
      {
         cout<<"Inside Default Constructor"<<endl;   
      }
      
     ~Demo()       // Destructor
      {
         cout<<"\nInside Destructor"<<endl;
      }
      
     void Fun(char Ch)     
      {
        cout<<"\n>>Ch as char is = "<<Ch<<endl;
      }
  
  
     void Fun(int N1)    
      {       
        cout<<"\nN1 as integer is = "<<N1<<endl;
      }
   
     void Fun(double D1)
      {
        cout<<"\nD1 as double is = "<<D1<<endl;
      }
  
};

int main()
{
    Demo Obj;
    
    Obj.Fun('A');      
    Obj.Fun(100);     
    Obj.Fun((int)28.56);       // Explicit Conversion
      
    char ch='K';
    
    Obj.Fun(ch);
    
    getch();
    return 0;
}
