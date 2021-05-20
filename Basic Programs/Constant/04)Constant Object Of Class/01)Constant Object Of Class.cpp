#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class A
{
   public:
     int i,j;
     
     A()
     {
       i=j=0;
       cout<<"\nInside Default Constructor"<<endl;
     }
     
     void Fun(int x)     // Non Constant Behaviour
     {
       int y=10;
       i=60;
       j=200;
       
       cout<<"\nInside Non-Constant Member Function Fun()"<<endl;
       
       cout<<"\nValues : x = "<<x<<" y = "<<y<<" i = "<<i<<" j = "<<j<<endl;
     
       cout<<"\n*******************************************************\n";  
     }
     
    void Gun(int m) const     // Constant Behaviour
    {
      int n=50;
      
      cout<<"\nInside Constant Member Function Gun()"<<endl;
       
      cout<<"\nValues : m = "<<m<<" n = "<<n<<" i = "<<i<<" j = "<<j<<endl;
       
      cout<<"\n*******************************************************\n";       
    }
    
   ~A()
    {
      cout<<"\nInside Destructor"<<endl;
    }
    
};


int main()
{
    A Obj1;
    
    Obj1.Fun(100);
    Obj1.i++;
    Obj1.j++;
    Obj1.Gun(400);

    cout<<"\nValues : i = "<<Obj1.i<<" j = "<<Obj1.j<<endl;
   
    cout<<"\n*******************************************************\n";
     
    const A Obj2;      // Creating Constant Object
  
  /*  
    Obj2.i++;
    Obj2.j++;
    Obj2.Fun(500);
    
    Not Allowed Because Obj2 Is Constant Object & i,j Are Non Constant Characteristics.
    
    Constant Object Can Only Access Constant Behaviours
  */
      
    
    Obj2.Gun(20);     // Allowed Because Gun() Function Is Constant And Also Object Is Constant So Constant Object Can Call Any Constant Behaviour Of Our Class    
      
    getch();
    return 0;
}