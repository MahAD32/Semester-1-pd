#include <iostream>
using namespace std;
main()
{
     float iv;
     float acc;
     float time;
     float velocity;
     cout<<"Enter Initial Velocity (m/s): ";
     cin>> iv;
     cout<<"Enter Acceleration (m/s^2): ";
     cin>> acc;
     cout<<"Enter Time (s): ";
     cin>> time;
     velocity = (acc * time)+(iv);
     cout<<"Final Velocity (m/s): "<<velocity;
}