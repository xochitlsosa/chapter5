#include<iostream>
using namespace std;
 
int main()
{
    float farenheit, celsius;
 
    cout << "temperature in ºC: ";
    cin >> celsius;
    farenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "temperature in ºF: " << farenheit << endl;
    return 0;
}
