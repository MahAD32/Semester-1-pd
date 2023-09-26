#include <IOstream>
using namespace std;
void rubik();
main()
{
        rubik();
}
void rubik()
{
     int num1,num2;
     cout<<"Enter the side length of the Rubik's Cube: ";
     cin>> num1;
     num2 = num1*num1*6;
     cout<<"Number of stickers needed: "<<num2<<endl;
}