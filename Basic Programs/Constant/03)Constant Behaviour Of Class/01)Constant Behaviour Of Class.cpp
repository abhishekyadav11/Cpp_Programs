#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Stud
{
  public:
     int i,j;
     
     Stud()
     {
       i=69;
       j=80;
       cout<<"\nInside Default Constructor"<<endl;
     }
     
    void Fun(int x)     // Non Constant Behaviour
    {
      int y=11;
      cout<<"\n********************************************************\n";
      
      cout<<"\nInside Non-Constant Behaviour/Member Function"<<endl;
      cout<<"\nValues : x = "<<x<<" y = "<<y<<" i = "<<i<<" j = "<<j<<endl;
     
      x++;
      y++;
      i++;
      j++;
      
      cout<<"\nAfter Incrementing : "<<endl;
      
      cout<<"\nValues : x = "<<x<<" y = "<<y<<" i = "<<i<<" j = "<<j<<endl;
      
      cout<<"\n*******************************************************\n";
    }
    
    void Gun(int x) const      // Constant Behaviour
    {
       int y=23;
       
       cout<<"\nInside Constant Behaviour/Member Function"<<endl;
       cout<<"\nValues : x = "<<x<<" y = "<<y<<" i = "<<i<<" j = "<<j<<endl;
       
       x++;
       y++;
  /* 
       i++;      
       j++;           
   Error Because Gun() Function is Constant And Constant Behaviour Can't Modify Any Another Content 
  
  */    
       cout<<"\nAfter Incrementing : "<<endl;
       
       cout<<"\nValues : x = "<<x<<" y = "<<y<<" i = "<<i<<" j = "<<j<<endl;
    
       cout<<"\n********************************************************\n";
    }
    
    ~Stud()
    {
       cout<<"\nInside Destructor"<<endl;
    }
};

int main()
{
    Stud sObj;
    
    sObj.Fun(50);
    sObj.Gun(10);
    cout<<"\nBack To main()...!"<<endl;
    
    getch();
    return 0;
}