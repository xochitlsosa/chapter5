#include <iostream>
using namespace std;

    int main()
    {
    	int rad1;
    	float volsp;		
        cout<<"enter the radius of a sphere : ";
    	cin>>rad1;
    	volsp=(4*3.14*rad1*rad1*rad1)/3;
        cout<<"its volume is : "<< volsp << endl;
        cout << endl;
        return 0;
    }