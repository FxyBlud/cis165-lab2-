#include <iostream>
using namespace std;
int main()
{
    double gallons = 47;
    double miles = 960;
    
    double mpg = miles/gallons;
    
    cout << "The car gets " << mpg << " miles per gallon." << endl;
    return 0;
}