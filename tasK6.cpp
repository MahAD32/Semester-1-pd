#include <iostream>
using namespace std;
void like(int num1);
main()
{
 int num1;
 cout<<"Enter your score: ";
 cin>> num1;
 like(num1);
}
void like (int num1)
{
if (num1>50){
 cout<<"Pass"<<endl;
}
if(num1<=50)
{
cout<<"Fail"<<endl;
}
}