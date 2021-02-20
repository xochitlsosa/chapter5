#include<iostream>
using namespace std;

int main(){
  float hours, minutes;
  cout << "enter time in hours";
  cin >> hours;
  minutes= hours*60;
  cout << "the time in minutes is: " << minutes <<endl;
  return 0;
}