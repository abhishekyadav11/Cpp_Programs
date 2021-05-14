#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Member
{
   public:
     int i,j;
     int &Ref;                // Declaring Reference Variable
     
     Member() : Ref(i)         // Initialising Reference Variable Using Member Initialisation List
     {
       cout<<"\nInside Default Constructor"<<endl;
     }
  
    void Fam(int a,int b)
    {      
      cout<<"\nInside Fam() Function"<<endl;
      
      i=a;
      j=b;
      
      cout<<"\nValues i = "<< i <<" j = "<< j <<"\n\nValue Of Reference Variable Ref = "<< Ref <<endl;    
     
      Ref=17;            // Initialising Reference Variable
      
      cout<<"\nAfter Changing Value Of Reference Variable...."<<endl;
      
      cout<<"\nValues i = "<< i <<" j = "<< j <<"\n\nValue Of Reference Variable Ref = "<< Ref <<endl;   
    }
    
   ~Member()
   {
     cout<<"\nInside Destructor"<<endl;
   }
  
};


int main()
{
    Member mObj;
    
    mObj.Fam(50,20);
    
    cout<<"\nBack To main()"<<endl;
    
    getch();
    return 0;
}