#include <iostream>
using namespace std;
int main()
{
    double gallons = 16;
    double miles = 312;
    
    double mpg = miles/gallons;
    
    cout << "The car gets " << mpg << " miles per gallon." << endl;
    return 0;
}