#include <iostream>
using namespace std;
main()      {
	float veg;
	float fru;
	float vegbuy;
	float frubuy;
	float total;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>> veg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>> fru;
	cout<<"Enter total kilograms of vegetables: ";
	cin>> vegbuy;
	cout<<"Enter total kilograms of fruits: ";
	cin>> frubuy;
	total = (veg*vegbuy + fru*frubuy)/1.94;
                 cout<<"Total earnings in Rupees (Rps): "<<total;
}
