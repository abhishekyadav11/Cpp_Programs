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
     
     void Fun(int x)
     {
       int y=10;
       i=60;
       j=200;
       cout<<"\nValues : x = "<<x<<" y = "<<y<<" i = "<<i<<" j = "<<j<<endl;
       
     }
     
    void Gun(int m) const
    {
      int n=50;
       
      cout<<"\nValues : m = "<<m<<" n = "<<n<<" i = "<<i<<" j = "<<j<<endl;
            
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
    
    const A Obj2;
  
  /*  
    Obj2.i++;
    Obj2.j++;
    
    Not Allowed Because Obj2 Is Constant Object & i,j Are Non Constant Characteristics.
    
    Constant Object Can Only Access Constant Behaviours
  */
    
    Obj2.Gun(20);     // Allowed Because Gun() Function Is Constant And Also Object Is Constant So Constant Object Can Call Any Constant Behaviour Of Our Class    
      
    getch();
    return 0;
}