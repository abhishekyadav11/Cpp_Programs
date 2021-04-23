#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class India
{
  public:
     int N1,N2,N3;
     
     India() 
     {
       
       N1=N2=N3=0;
       
       cout<<"\nInside Constructor Of Our Class"<<endl;
     }
     
    India(int x) : N2(x++),N3(x),N1(++x)
    {                 
        cout<<"\nInside Parameterized Constructor Of Our Class"<<endl;
    }
  
   ~India()
    {
      cout<<"\nInside Destructor Of Our Class"<<endl;
    }
  
};


int main()
{
    India Obj1(10);
    
    cout<<"\nObject 1 Values : "<<Obj1.N1<<" "<<Obj1.N2<<" "<<Obj1.N3 <<endl;    

    getch();
    return 0;
}