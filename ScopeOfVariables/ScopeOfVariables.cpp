// This program is written to show you how the 
// Scope affects the way a program runs

#include<iostream>
using namespace std;

int x = 5;

int main() {
	{int x = 10;
	cout << "mem location of x is: " << &x << endl;
	cout << "val at: " << &x << " is: " << x << endl;
	}

	cout << "\n\nmem location of x is: " << &x << endl;
	cout << "Value at " << &x << " is " << x << endl;
	return 0;
}