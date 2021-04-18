#include <iostream>
using namespace std;
#include<conio.h>

//Compiler version g++ 6.3.0

class Base
{
  public:
      
      int Add(int No1,int No2)
       {
         int Sum=0;
         
         Sum=No1+No2;
         
         return Sum;
       }
  
};

class Derived : public Base
{
  public: 
    
   int d_No;
   
      int My_Add(int N1,int N2,int N3)
      {
        int Res=0;
        
        Res=Add(Add(N1,N2),N3);
        
        return Res;
      }
  
};


int main()
{
    Base bObj;
    
    cout <<"Size Of Base Object bObj is = "<<sizeof(bObj)<<endl;
    cout<<"\nAddition Of 100 & 200 is = "<<bObj.Add(100,200)<<endl;
    
    Derived dObj;
    
    cout<<"\nSize Of Derived Object dObj is = "<<sizeof(dObj)<<endl;
    cout<<"\nAddition Of 100,200 & 300 is = "<<dObj.My_Add(100,200,300)<<endl;
    
    getch();
    return 0;
}