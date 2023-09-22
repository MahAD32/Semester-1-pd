#include <iostream>
using namespace std;
main()
{
     float count;
     float crew;
     float percentage;
     cout<<"Enter Imposter Count: ";
     cin>> count;
     cout<<"Enter Player Count: ";
     cin>> crew;
     percentage = ((count/crew)*100);
     cout<<"Chance of being an imposter: "<<percentage<<"%";

}