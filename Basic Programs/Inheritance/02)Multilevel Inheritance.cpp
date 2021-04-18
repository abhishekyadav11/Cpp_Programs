#include <iostream>
using namespace std;
#include<conio.h>

//Compiler version g++ 6.3.0

class A1
{
  public:
     int a,b;             // Characteristics
     
     A1()                 // Constructor
     {     
         cout<<"\n***************************************\n"<<endl;        
         cout<<"Inside A1 Class Constructor"<<endl;   
     }
     
    ~A1()                // Destructor
     {       
         cout<<"\nInside Al Class Destructor"<<endl;   
     }
     
    void Fun()             // Member Function
     {
       a=100;
       b=200;
       
       cout<<"\nInside Fun() Function Of Our Class"<<endl;
       cout<<"\nValue Of a = "<<a<<" b= " <<b <<endl;
     
     }
};

class D1 : public A1         //Derived Class 1
{
   public:
      int x;                // Characteristic
      
      D1()                 // Constructor
      {
          cout<<"\nInside D1 Class Constructor"<<endl;
      }
      
     ~D1()                // Destructor
      {
          cout<<"\nInside D1 Class Destructor"<<endl;
      }
  
     void Gun()          // Member Function
      {
         D1::Fun();
         x=300;
         
         cout<<"\nInside Gun() Function Of Our Class"<<endl;
         cout<<"\nValue Of x= "<<x <<endl;
         
      }
};

class D2 : public D1             // Derived Class 2
{
  public:
     int i,j;              // Characteristics
     
      D2()                 // Constructor
      {
            cout<<"\nInside D2 Class Constructor"<<endl;
      }
  
     ~D2()                 // Destructor
      {
           cout<<"\nInside D2 Class Destructor"<<endl;
      }
  
     void Sun()              // Member Function
      {
          D2::Gun();
          i=500;
          j=700;
        
          cout<<"\nInside Sun() Function Of Our Class"<<endl;
          cout<<"\nValue Of i = "<<i<<" j= " <<j <<endl;
     
      }
     
};

int main()
{
    D2 Obj;
    
    cout<<"\n***************************************"<<endl;
    
    cout << "\nSize Of Given Object is = "<<sizeof(Obj)<<endl;

    cout<<"\n***************************************\n"<<endl;
    
    Obj.Sun();
    
    cout<<"\n\n***************************************\n"<<endl;
    
    getch();
    return 0;
}