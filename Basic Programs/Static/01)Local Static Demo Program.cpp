#include<conio.h>
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

void Fun()
{
    int No=20;
    static int Num=200;
    
    cout<<"Value Of Non Static Variable  = "<<No <<endl;
    cout<<"Value Of Static Variable      = "<<Num <<endl<<"\n";
    
    Num++;
    return;  
}


int main()
{
    Fun();
    Fun();
    Fun();
    Fun();
    
    getch();
    return 0;
}