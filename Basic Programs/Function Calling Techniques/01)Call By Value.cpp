#include <iostream>
using namespace std;
#include<conio.h>

//Compiler version g++ 6.3.0

void Fun(int);

int main()
{
    int No=21;
    
    cout<<"Value Before Function Call = "<<No <<endl;
    
    Fun(No);
    
    cout <<"\nValue After Function Call = "<<No <<endl;
    
    getch();
    return 0;
}


void Fun(int Num)
{
  
   Num++;
   
  return;
}

