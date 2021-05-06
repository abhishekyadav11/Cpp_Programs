// Access Specifier Based : We can't overload function by changing its Access Specifier Because at the time of function call Access Specifier is NOT Considered   

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
/* 
  private:       // Not Allowed
  
     void Fun(int N1)    
      {       
        cout<<"\nN1 as integer is = "<<N1<<endl;
      }
*/
};

int main()
{
    Demo Obj;
    
    Obj.Fun('A');      
 // Obj.Fun(100);          // Not Allowed
      
    cout<<"\nBack To Main()..."<<endl;
    
    getch();
    return 0;
}