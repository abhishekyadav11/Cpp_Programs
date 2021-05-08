#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   int No=0;
   int &Ref=No;
   
   cout<<"Value Of No is = "<<No<<endl;
   cout<<"\nValue Of Reference Variable(Ref) is = "<<Ref<<endl;
   
   cout<<"\n***********************************************\n";
   
   Ref=45;     // initialisation Of Reference Variable
   
   cout<<"\nValue Of No is = "<<No<<endl;
   cout<<"\nValue Of Reference Variable(Ref) is = "<<Ref<<endl;
   
   cout<<"\n***********************************************\n";
   
   No++;     // Increment In Normal Variable
   
   cout<<"\nValue Of No is = "<<No<<endl;
   cout<<"\nValue Of Reference Variable(Ref) is = "<<Ref<<endl;
   
   cout<<"\n***********************************************\n";
   
   getch();
   return 0;
}