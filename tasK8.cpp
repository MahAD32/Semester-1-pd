#include <iostream>
using namespace std;
void dina(string s, float num1);
main()
{
     string s;
     float num1;
     cout<<"Enter the day of purchase: ";
     cin>> s;
     cout<<"Enter the total purchase amount: $";
     cin>> num1;
     dina(s,num1);

}
void dina(string s,float num1)
{
if (s == "Sunday")
{
cout<<"Payable amount: "<<num1-(num1/10);
}
if (s =="Monday","Tuesday","Wednesday","Thusday","Friday","Saturday")
{
     cout<<"Payable amount: $"<<num1<<endl;
}
}