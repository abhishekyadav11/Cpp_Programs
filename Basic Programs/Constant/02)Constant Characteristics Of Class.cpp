#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Circle
{
  public:
    float Rad,Area;             // Non Constant Characteristics
    const float Pi;            // Constant Characteristics
      
    Circle();                // Constructor With Member Initialisation list
    
    Circle(float);               // Parameterized Constructor
    
   void Area_Of_Circle();     // Member Function
     
    ~Circle();                      // Destructor
  
};

Circle :: Circle() : Pi(3.14)       // Constructor - Definition
{
    Area=Rad=0.0;
    
    cout<<"\nInside Constructor Of Our Class"<<endl;
    
}

Circle :: Circle(float F_Rad) : Pi(3.14)       // Parameterized Constructor - Definition
{
   Rad=F_Rad;
   Area=0.0;
   
   cout<<"\nInside Parameterized Constructor Of Our Class"<<endl;
}

void Circle :: Area_Of_Circle()             // Member Function - Definition
{
  
  Area=Rad*Rad*Pi;
  
}
 
Circle :: ~Circle()                      // Destructor - Definition
{  
   cout<<"\nInside Destructor Of Our Class"<<endl;  
}
   
 
int main()
{
    Circle Obj1;
    
    cout<<"\nEnter Radius Of Circle : ";
    cin>>Obj1.Rad;
    
    Obj1.Area_Of_Circle();
    
    cout<<"\nArea Of 1st Circle Is = "<<Obj1.Area <<endl;

    Circle Obj2(3.5);
    
    Obj2.Area_Of_Circle();
    
    cout<<"\nArea Of 2nd Circle Is = "<<Obj2.Area <<endl;

    getch();
    return 0;
    
}