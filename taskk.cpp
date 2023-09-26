#include <iostream>
using namespace std;
void height();
main()
{
     height();
}
void height()
{
     float inch,feet;
     cout<<"Enter the measurement in inches: ";
     cin>> inch;
     feet = inch/12;
     cout<<"Equivalent in feet: "<<feet<<endl;
}