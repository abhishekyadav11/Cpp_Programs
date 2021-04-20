#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class A1
{
  public:
    int a,b;
     
     A1()
     {
       cout<<"\n***************************************\n"<<endl;
       cout<<"\nInside A1 Class Constructor"<<endl;
     }
    
    ~A1()
     {
       cout<<"\nInside A1 Class Destructor"<<endl;
     }
     
    void Fun_1() 
     {
       cout<<"\nInside Fun_1() Function Of Our Class"<<endl;
     }
};

class A2
{
  public:
    int x;
    
     A2()
     {
       cout<<"\nInside A2 Class Constructor"<<endl;
     }
     
    ~A2()
     {
       cout<<"\nInside A2 Class Destructor"<<endl;
     }
     
    void Fun_2()
    {           
      cout<<"\nInside Fun_2() Function Of Our Class"<<endl;
    }
    
};

class D1 : public A1,A2
{
   public:
     int i,j;
     
     D1()
     {
       cout<<"\nInside D1 Class Constructor"<<endl;       
     }
     
    ~D1()
     {
       cout<<"\nInside D1 Class Destructor"<<endl;
     }
     
    void Fun_3()
     {
       D1::Fun_1();
       D1::Fun_2();
       
       cout<<"\nInside Fun_3() Function Of Our Class"<<endl;
     }
     
};


int main()
{
    D1 Obj;
    
    cout<<"\n***************************************\n"<<endl;
    
    Obj.Fun_3();
    
    cout<<"\n***************************************\n"<<endl;
    
    cout <<"\nSize Of Object = "<<sizeof(Obj)<<endl;

    cout<<"\n\n***************************************\n"<<endl;
    
    getch();
    return 0;
}