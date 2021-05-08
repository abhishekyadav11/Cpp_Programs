#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   int No=0;
   int &Ref1=No;
   int &Ref2=Ref1;
   int &Ref3=Ref2;
   
   cout<<"Value Of No is = "<<No<<endl;
   cout<<"\nValue Of 1st Reference Variable(Ref1) is = "<<Ref1<<endl;
   cout<<"\nValue Of 2nd Reference Variable(Ref2) is = "<<Ref2<<endl;
   cout<<"\nValue Of 3rd Reference Variable(Ref3) is = "<<Ref3<<endl;
   
   cout<<"\n***********************************************\n";
   
   Ref1=45;     // Initialisation Of 1st Reference Variable
   Ref2=Ref3+55;    //  Initialisation Of 2nd Reference Variable
   
   cout<<"\nValue Of No is = "<<No<<endl;
   cout<<"\nValue Of 1st Reference Variable(Ref1) is = "<<Ref1<<endl;
   cout<<"\nValue Of 2nd Reference Variable(Ref2) is = "<<Ref2<<endl;
   cout<<"\nValue Of 3rd Reference Variable(Ref3) is = "<<Ref3<<endl;
   
   cout<<"\n***********************************************\n";
   
   No*=2;         // Incrementing Normal Variable
   
   cout<<"\nValue Of No is = "<<No<<endl;
   cout<<"\nValue Of 1st Reference Variable(Ref1) is = "<<Ref1<<endl;
   cout<<"\nValue Of 2nd Reference Variable(Ref2) is = "<<Ref2<<endl;
   cout<<"\nValue Of 3rd Reference Variable(Ref3) is = "<<Ref3<<endl;
   
   cout<<"\n***********************************************\n";
   
   Ref3++;        // Incrementing Reference Variable
   Ref1=Ref2-10;   
   
   cout<<"\nValue Of No is = "<<No<<endl;
   cout<<"\nValue Of 1st Reference Variable(Ref1) is = "<<Ref1<<endl;
   cout<<"\nValue Of 2nd Reference Variable(Ref2) is = "<<Ref2<<endl;
   cout<<"\nValue Of 3rd Reference Variable(Ref3) is = "<<Ref3<<endl;
   
   
   getch();
   return 0;
}