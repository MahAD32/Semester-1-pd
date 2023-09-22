#include <iostream>
using namespace std;
main()
{
     string p;
     float wl;
     float result;
     cout<<"Enter the Name of the Person: ";
     cin>> p;
     cout<<"Enter the target weight loss in kilograms: ";
     cin>> wl;
     result = wl*15;
     cout<<p<<" will need "<<result<<" days to lose "<<wl<<" kg of weight by following the doctor's suggestions";
}