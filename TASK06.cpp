#include <iostream>
using namespace std;
main()
{
         int pounds;
         int cost;
         int area;
         int cps;
         int cpa;
         cout<<"Enter the size of the fertilizer bag in pounds: ";
         cin>> pounds;
         cout<<"Enter the cost of the bag: $";
         cin>> cost;
         cout<<"Enter the area in square feet that can be covered by the bag: ";
         cin>> area;
         cps = cost/pounds;
         cout<<"Cost of fertilizer per pound: $"<<cps<<endl;
         cpa = (cost/area);
         cout<<"Cost of fertilizing per square foot: $"<<cpa;
}
        