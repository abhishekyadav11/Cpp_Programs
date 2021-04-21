#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

float Area_Of_Circle(float);

const float Pi=3.14;           // Global Constant Variable

int main()
{ 
    const int No=20;            // local Constant Variable
    float R=0.0;            // Non Constant Local Variable
  
  // No++;                  // NOT ALLOWED as it is Constant Variable
  
 //  No=10;                // NOT ALLOWED as it is  Constant Variable
 
    cout <<"Enter Radius Of Circle : ";
    cin>>R;
    
    cout<<"\nRadius Of Circle is = "<<Area_Of_Circle(R)<<endl;
    
    getch();
    return 0;
}


float Area_Of_Circle(float Rad)
{
  float Area=0.0;
  
  Area=Rad*Rad*Pi;
  
  return Area; 
}

