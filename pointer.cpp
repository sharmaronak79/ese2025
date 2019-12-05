//============================================================================
// Name        : pointer.cpp
// Author      : ronak
// Version     :
// Copyright   : Your copyright notice
// Description : use of pointer
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a=110;
	int *ptr1;

	ptr1=&a;


	cout << "address of a is = " << &a << endl; // prints address of a
	cout << "address of a is = " << ptr1 << endl; // prints address of a
	cout << "value of a is = " << a << endl; // prints value of a
	cout << "value of a is = " << *ptr1 << endl; // prints value of a, usng pointer

	return 0;
}
