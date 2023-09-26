#include <iostream>
using namespace std;
void product(int num1, int num2);
void substract(int num1,int num2);
void add(int num1,int num2);
void division(float num1,float num2);
main()
{
     int num1, num2;
     char op;
     cout<<"Enter 1st number: ";
     cin>> num1;
     cout<<"Enter 2nd number: ";
     cin>> num2;
     cout<<"Enter an operator (+, -, *, /): ";
     cin>> op;
     if (op =='*')
{
     product(num1,num2);
}
     if (op =='-')
{
     substract(num1,num2);
}
     if(op == '+')
{
     add(num1,num2);
}
     if (op =='/')
{
     division(num1,num2);
}
}
void add(int num1, int num2)
{
    cout<<"Addition: "<<num1+num2<<endl;
}
void division(float num1,float num2)
{
     cout<<"Divide: "<<num1/num2<<endl;
}
void product(int num1,int num2)
{
       cout<<"Multiplication: "<<num1*num2<<endl;
}
void substract(int num1,int num2)
{
      cout<<"Substraction: "<<num1-num2<<endl;
}   