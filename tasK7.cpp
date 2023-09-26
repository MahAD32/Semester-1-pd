#include <iostream>
using namespace std;
void odd(int num1);
main()
{
      int num1;
      cout<<"Enter a number: ";
      cin>>num1;
      odd(num1);
}
void odd(int num1)
{
  if (num1%2==0){
  cout<<"Number "<<num1<<" is even"<<endl;
}
    if(num1%2==1){
   cout<<"Number "<<num1<<" is odd"<<endl;
}
}