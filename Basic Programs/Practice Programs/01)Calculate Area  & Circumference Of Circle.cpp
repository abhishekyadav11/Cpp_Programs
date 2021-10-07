#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
        private :
                float Pi;

        public :
                float Area,Radius,Circum;

                Circle();                                               // Constructor
                Circle(float);                                          // Parameterized Constructor
                ~Circle();                                              // Destructor
                void Accept_Radius();
                void Calculate_Area_Of_Circle();
                void Calculate_Circumference_Of_Circle();
                void Display_Area_Circumference();
};

Circle :: Circle()
{
           cout<<"\n Inside Default Constructor \n";

           Pi = 3.14;
           Area = 0.0;
           Radius = 0.0;
           Circum = 0.0;

}

Circle :: ~Circle()
{
           cout<<"\n Inside Destructor. \n";

}

Circle :: Circle(float Rad)
{
          cout<<"\n Inside Parameterized Constructor.\n";

          Pi = 3.14;
          Radius = Rad;
          Area = Pi*Rad*Rad;
          Circum = 2*Pi*Radius;
          Display_Area_Circumference();
}


void Circle :: Accept_Radius()
{
          cout<<"\n Enter Radius : ";
          cin>>Radius;
}


void Circle :: Calculate_Area_Of_Circle()
{
          Area = Pi*Radius*Radius;
}


void Circle :: Calculate_Circumference_Of_Circle()
{
           Circum = 2*Pi*Radius;
}

void Circle :: Display_Area_Circumference()
{

          cout<<"\n--------------------- Area & Circumference Of Circle ---------------------\n";
          cout<<"\n Area = "<<Area;
          cout<<"\n\n Circumference = "<<Circum;
          cout<<"\n\n--------------------------------------------------------------------------\n";

}


int main()
{
           Circle CObj1;

           CObj1.Accept_Radius();
           CObj1.Calculate_Area_Of_Circle();
           CObj1.Calculate_Circumference_Of_Circle();
           CObj1.Display_Area_Circumference();

           getch();

           Circle CObj2(3);

           getch();

           return 0;
}
