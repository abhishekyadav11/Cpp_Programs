#include<conio.h>
#include<iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   cout<<"\n**********************************************\n";
   
   cout<<"\n    Size Of All Fundamental Data Types \n"<<endl;
    
    cout<<"01) char        = "<<sizeof(char)<<endl;
    cout<<"02) short       = "<<sizeof(short)<<endl;
    cout<<"03) int         = "<<sizeof(int)<<endl;
    cout<<"04) long        = "<<sizeof(long)<<endl;
    cout<<"05) long long   = "<<sizeof(long long)<<endl;
    cout<<"06) float       = "<<sizeof(float)<<endl;
    cout<<"07) double      = "<<sizeof(double)<<endl;
    cout<<"08) long double = "<<sizeof(long double)<<endl;
    cout<<"09) bool        = "<<sizeof(bool)<<endl;
  
    cout<<"\n**********************************************\n";
  
   getch();
   return 0;
}
