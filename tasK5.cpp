#include <iostream>
using namespace std;
void age(int num1);
main()
{
int num1;
cout<<"Enter your age: ";
cin>> num1;
age(num1);
}
void age(int num1)
{
 if (num1<18)
{
      cout<<"You are not eligible to vote.";
}
if (num1>=18)
{
  cout<<"You are eligible to vote.";
}

}