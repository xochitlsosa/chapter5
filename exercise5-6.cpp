#include<iostream>
using namespace std;

int main(){
  float hours, minutes;
  cout << "enter time in minutes";
  cin >> minutes;
  hours= minutes/60;
  cout << "the time in hours is: " << hours <<endl;
  return 0;
}