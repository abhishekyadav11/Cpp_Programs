#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class India
{
  public:
     int N1,N2,N3;
     
     India() : N1(0),N2(10)
     {
       N3=0;
       
       cout<<"\nInside Constructor Of Our Class"<<endl;
     }
     
    India(int a,int b) : N1(a),N2(b)
    {
      N1=100;
      N3=500;
      
      cout<<"\nInside Parameterized Constructor Of Our Class"<<endl;
    }
  
   ~India()
    {
      cout<<"\nInside Destructor Of Our Class"<<endl;
    }
  
};


int main()
{
    India Obj1;
    India Obj2(51,22);
    
    cout<<"\nObject 1 Values : "<<Obj1.N1<<" "<<Obj1.N2<<" "<<Obj1.N3 <<endl;

    cout<<"\nObject 2 Values : "<<Obj2.N1<<" "<<Obj2.N2<<" "<<Obj2.N3 <<endl;

    getch();
    return 0;
}
