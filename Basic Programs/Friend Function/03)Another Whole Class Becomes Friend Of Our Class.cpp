#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Subject
{
  public:
   Subject()
   {
     cout<<"\n•Inside Subject Class Constructor"<<endl;
   }
  
  ~Subject()
   {
     cout<<"\n•Inside Subject Class Destructor"<<endl;
   }
   
  void Sub_Marks(int,int,int);
   
};

class Student
{
  private:
    int Tot;
    
    void Find_Total()
    {
      Tot=Sub1+Sub2+Sub3;
    }
    
  
  protected:
    float Per;
    
    void Find_Percentage()
    {
      Per=(Tot/3);
    }
    
  public:
    int Sub1,Sub2,Sub3;
    
    Student()
    {
      Sub1=Sub2=Sub3=Tot=0;
      Per=0.0;
      
      cout<<"\n•Inside Student Class Constructor"<<endl;
    }
    
   ~Student()
    {
      cout<<"\n•Inside Student Class Destructor"<<endl;
    }
    
   friend class Subject;   // Declaring Another Whole Class as Friend Of Our Class

};

void Subject:: Sub_Marks(int M1,int M2,int M3)
{
   Student S_Obj;
   
   S_Obj.Sub1=M1;
   S_Obj.Sub2=M2;
   S_Obj.Sub3=M3;
   
   S_Obj.Find_Total();
  
   cout<<"\n>>Total Of 3 Subject Marks is = "<<S_Obj.Tot <<endl;
   
   S_Obj.Find_Percentage();
   
   cout<<"\n>>Percentage is = "<<S_Obj.Per <<endl;
   
   getch();
}


int main()
{
    int S1=0,S2=0,S3=0;
    
    cout<<"Enter 3 Subject Marks : ";
    cin>>S1>>S2>>S3;
    
    Subject S;   
    
    S.Sub_Marks(S1,S2,S3);
    
    cout<<"\nBack To Main()"<<endl;
    
    getch();
    return 0;
}