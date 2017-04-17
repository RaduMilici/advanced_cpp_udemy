#include <iostream>
#include "Complex.h"
using namespace std;

namespace op_ov{

void plus_operator () {

	// check Complex operator + function in Complex.cpp

	Complex c1(29, 5);
	Complex c2(19, 89);

	cout << c1 + c2 << endl; // (48,94i)

	/*
	 * addition works on both sides of plus because both
	 * overloads are declared in Complex.h and defined
	 * in Complex.cpp
	 *
	 * Complex operator + (const Complex & a, double real);
	 * Complex operator + (double real, const Complex & a);
	 */
	cout << c1 + 10 << endl; // (39,5i)
	cout << 11 + c1 << endl; // (40,5i)


}

}


