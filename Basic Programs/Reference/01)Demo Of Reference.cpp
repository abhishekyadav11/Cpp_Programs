#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int i=21;
    int &Ref1=i;           //  21
    int &Ref2=Ref1;        //  21
    int &Ref3=Ref2;        //  21
    
    cout<<"\n i   = "<<i <<endl;    // i = 21
    
    Ref1++;        // 22
    i++;          //  23
    
    cout<<"\n i   = "<<i <<endl;        // i    = 23
    cout<<"\nRef1 = "<<Ref1 <<endl;     // Ref1 = 23
    cout<<"\nRef2 = "<<Ref2 <<endl;     // Ref2 = 23
    cout<<"\nRef3 = "<<Ref3 <<endl;     // Ref3 = 23
    
    getch();
    return 0;
}