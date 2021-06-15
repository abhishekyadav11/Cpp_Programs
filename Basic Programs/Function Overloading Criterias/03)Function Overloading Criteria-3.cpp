// Same Function Name But Different Type/Return Type

#include<conio.h>
#include<iostream>
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
      
      void Addition(int N1,int N2)     //Allowed
      {
        cout<<"\n>>Addition is = "<<N1+N2<<endl;
      }
  
   /*
      int Addition(int N1,int N2)    // Not Allowed
      {       
        int Res=0;
        
        Res=N1+N2;
        
        return Res;
      }
   
   */ 
};

int main()
{
    Maths Obj;
    
    Obj.Addition(50,20);      //  Allowed
  //Obj.Addition(100,15);     // Not Allowed
       
    cout<<"\nBack To Main()..."<<endl;
    
    getch();
    return 0;
}
