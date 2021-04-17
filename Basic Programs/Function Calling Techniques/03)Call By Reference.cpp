#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

void Reference(int&);

int main()
{
    int No=21;
    
    cout<<"Value Before Function Call = "<<No <<endl;
    
    Reference(No);
    
    cout <<"\nValue After Function Call = "<<No <<endl;
    
    getch();
    return 0;
}


void Reference(int &Ref)
{
  
   Ref++;
   
   return;
}

