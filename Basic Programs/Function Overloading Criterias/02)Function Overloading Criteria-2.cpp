// Same Function Name But Different Types Of Parameters/Arguments

#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Maths
{
  public:
     
      Maths()        // Default Constructor
      {
         cout<<"Inside Default Constructor"<<endl;   
      }
      
     ~Maths()       // Destructor
      {
         cout<<"\nInside Destructor"<<endl;
      }
      
      void Addition(int N1,int N2)
      {
        cout<<"\n>>Addition is = "<<N1+N2<<endl;
      }
  
      void Addition(float N1,float N2)
      {       
        cout<<"\n>>Addition is = "<<N1+N2<<endl;
      }
      
};

int main()
{
    Maths Obj;
    
    Obj.Addition(10,20);
    Obj.Addition(10.5f,15.2f);
       
    cout<<"\nBack To Main()..."<<endl;
    
    getch();
    return 0;
}
