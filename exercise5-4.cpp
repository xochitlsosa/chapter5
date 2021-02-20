#include<iostream>
using namespace std;

int main()
{
    float kmph, miph;
    cout << " distance in km ";
    cin >> kmph;
	miph = (kmph * 0.6213712); 
    cout << " The distance in mip is: " << miph << endl;
	cout << endl;
    return 0;
}