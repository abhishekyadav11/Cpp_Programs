// Same Function Name But Different No. Of Parameters/Arguments

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
  
      void Addition(int N1,int N2,int N3)
      {
        cout<<"\n>>Addition is = "<<N1+N2+N3<<endl;
      }
      
};

int main()
{
    Maths Obj;
    
    Obj.Addition(10,20);
    Obj.Addition(10,20,30);
       
    cout<<"\nBack To Main()..."<<endl;
    
    getch();
    return 0;
}
