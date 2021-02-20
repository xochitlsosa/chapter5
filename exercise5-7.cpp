#include<iostream>
using namespace std; 
int main (){

    int num, bin;
    cout << "enter an integer number : ";
    cin >> num;
    cout << "the number " << num << " converted to binary is ";
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }
    return 0;
}