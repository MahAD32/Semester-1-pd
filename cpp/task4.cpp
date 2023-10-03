#include <iostream>
#include <cmath>
using namespace std;
int main(){
           float n1,n2,rad,result;
           cout<<"Enter the distance from the base of the tree (in feet): ";
           cin>> n1;
           cout<<"Enter the angle of elevation (in degrees): ";
           cin>> n2;
           rad = n2/57.2958;
           result=tan(rad)*n1;
            cout<<"The height of the tree is: "<<result<<" feet";
return 0;
}