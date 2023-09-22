#include <iostream>
using namespace std;
main()
{
     int minutes;
     int seconds;
     int number;
     cout<<"Number of Minutes: ";
     cin>> minutes;
     cout<<"Frames per Second: ";
     cin>> seconds;
     number = (minutes*60)*seconds;
     cout<<"Total Number of Frames: "<<number;
}
