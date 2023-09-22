#include<iostream>
using namespace std;
main()
{
         string name;
         float price;
         float price2;
         float number;
         float number2;
         float percentage;
         float sales;
         float donation;
         float amount;
         cout<<"Enter the movie name: ";
         cin>> name;
         cout<<"Enter the adult ticket price: $";
         cin>> price;
         cout<<"Enter the child ticket price: $";
         cin>> price2;
         cout<<"Enter the number of adult tickets sold: ";
         cin>> number;
         cout<<"Enter the number of child tickets sold: ";
         cin>> number2;
         cout<<"Enter the percentage of the amount to be donated to charity: ";
         cin>> percentage;
         cout<<endl;
         cout<<"Movie: "<<name<<endl;
         sales = (price*number) + (price2*number2);
         cout<<"Total amount generated from ticket sales: $"<<sales<<endl;
         donation = (sales*percentage)/100;
         cout<<"Donation to charity("<<percentage<<"%): $"<<donation<<endl;
         amount = sales-donation;
         cout<<"Remaining amount after donation: $"<<amount;
}
