#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Subject
{
  private:
    int S1,S2,S3;
  
  public:
    int Tot;
    float Per;
     
      Subject()             // Default Constructor
      {
        S1=S2=S3=Tot=0;
        Per=0.0;
        
        cout<<"\nInside Subject Class Constructor"<<endl;
      }
  
     Subject(int M1,int M2,int M3)        // Parameterized Constructor
     {
        S1=M1;
        S2=M2;
        S3=M3;        
        Tot=0;
        Per=0.0;
 
        cout<<"\nInside Parameterized Constructor"<<endl;
     }
  
    Subject(Subject &Ref)      // Copy Constructor
    {
      this->S1=Ref.S1;
      this->S2=Ref.S2;
      this->S3=Ref.S3;
      this->Tot=Ref.Tot;
      this->Per=Ref.Per;
      
      cout<<"\nInside Copy Constructor"<<endl;
    }
    
   ~Subject()
    {
      cout<<"\nInside Subject Class Destructor"<<endl;
    }
      
      
   void Set_Marks()        // Member Function
   {
     
     cout<<"\nEnter 3 Subject Marks : ";
     cin>>S1>>S2>>S3;
     
   }
   
   void Find_Total()
   {
     Tot=S1+S2+S3;
   }
   
   void Find_Percentage()
   {
     Per=Tot/3;
   }
   
};

int main()
{
   Subject Sub1;
   
   cout<<"\n*******************************\n";
   
   Sub1.Set_Marks();
   
   Sub1.Find_Total();
   
   Sub1.Find_Percentage();
   
   cout<<"\nTotal = "<<Sub1.Tot;
   cout<<"\nPercentage = "<<Sub1.Per<<endl;
   
   cout<<"\n*******************************\n";
   
   Subject Sub2(87,65,49);
   
   Sub2.Find_Total();
   
   Sub2.Find_Percentage();
   
   cout<<"\n>>Total = "<<Sub2.Tot;
   cout<<"\n>>Percentage = "<<Sub2.Per<<endl;
   
   cout<<"\n*******************************\n";
   
   Subject Sub3(Sub2);
   
   cout<<"\n>>Total = "<<Sub3.Tot;
   cout<<"\n>>Percentage = "<<Sub3.Per<<endl;
   
   cout<<"\n*******************************\n";
   
   Sub3.Set_Marks();
   
   Sub3.Find_Total();
   
   Sub3.Find_Percentage();
   
   cout<<"\n>>Total = "<<Sub3.Tot;
   cout<<"\n>>Percentage = "<<Sub3.Per<<endl;
   
   cout<<"\n*******************************\n";
   getch();
   return 0;
   
}